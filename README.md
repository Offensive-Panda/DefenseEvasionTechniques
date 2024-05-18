# DefenseEvasionTechniques

![My-Setup](https://github.com/Offensive-Panda/DefenseEvasionTechniques/assets/76246439/d59a210e-e898-4981-987a-f46952432692)


Welcome to the Defense Evasion Techniques Repository! This repository contains a collection of techniques designed to bypass Endpoint Detection and Response (EDR) and Extended Detection and Response (XDR) systems. These techniques include:

| Technique           | Description                                      |
|---------------------|--------------------------------------------------|
| Syscalls            | Exploring ways to manipulate system calls to evade detection.   |
| Direct and Indirect Calls | Strategies for making direct and indirect function calls to evade detection mechanisms.   |
| API Hashing         | Techniques for obfuscating and altering API calls to avoid detection.   |
| Obfuscation         | Methods to obfuscate code and make it harder to analyze.   |
| Encryption         | Use of encrption to bypass static analysis of EDRs.   |
| Egg Hunting | Syscall Instruction In-memory patching to bypass static detection.
| Random Instructions and Prototypes | Use random NOP instructions and name of API, prototypes to avoid static analysis.   |
| Mokingjay | Use of vulnerable dll to avoid detection of RWX memory region creation.   |
| Forking Technique | Use of windows fork API to clone parent process after injecting shellcode, avoid detection of CreateRemoteThread.   |
| Unhookig | Unhooking EDRs user mode hooks using clean copy of dll, raw copy from remote server, suspended process to bypass EDRs.   |
| ETW Patching | Applying ETW patching to avoid event based detection.   |
| PEB Lookup | Resolving SSN and Native API's on run-time using PEB lookup for 32bits & 64bits.   |


| Blogs          | Links                                    |
|---------------------|--------------------------------------------------|
| Arsenal: Bypass EDR’s/XDR’s and make malware analysis harder | https://systemweakness.com/arsenal-bypass-edrs-xdr-s-and-make-malware-analysis-harder-6fde3e2884a5 |
| On-Disk Detection: Bypass AV’s/EDR’s using syscalls with legacy instruction, series of instructions and random nop instructions | https://medium.com/system-weakness/on-disk-detection-bypass-avs-edr-s-using-syscalls-with-legacy-instruction-series-of-instructions-5c1f31d1af7d |
| EASE POST-EXPLOITATION: Getting elevated reverse shell using DLL Hijacking and Mock Directories | https://medium.com/system-weakness/ease-post-exploitation-getting-elevated-reverse-shell-using-dll-hijacking-and-mock-directories-2fc2c7a3cdae. |
| AV/EDR Evasion Using Direct System Calls (User-Mode vs kernel-Mode) | https://medium.com/@merasor07/av-edr-evasion-using-direct-system-calls-user-mode-vs-kernel-mode-fad2fdfed01a. |
| Bypass “Mimikatz” using the Process Injection Technique | https://medium.com/system-weakness/bypass-mimikatz-using-process-injection-technique-6d2a8415fcd6. |
| AV/EDR Evasion Using Direct System Calls (User-Mode vs kernel-Mode) | https://medium.com/@merasor07/av-edr-evasion-using-direct-system-calls-user-mode-vs-kernel-mode-fad2fdfed01a. |
| Unveiling the Intricacies of AsyncRAT: A deployment in Colombia by the Blind Eagle Cyber Group | https://medium.com/@merasor07/unveiling-the-intricacies-of-asyncrat-a-deployment-in-colombia-by-the-blind-eagle-cyber-group-83b48cc415a7. |
| Unveiling the Intricacies of SamSam Ransomware: A Comprehensive Analysis Plus Proactive Threat Emulation | https://medium.com/@merasor07/unveiling-the-intricacies-of-samsam-ransomware-a-comprehensive-analysis-plus-proactive-threat-bee37979f407. |
| Dark Crystel RAT (DCrat)Detailed Analysis | https://medium.com/system-weakness/dark-crystel-rat-dcrat-detailed-analysis-94a2bcccd5ce. |
| Dirty vanity implementaion using direct syscalls | https://www.linkedin.com/posts/usman-sikander13_malwaredevelopment-syscalls-forking-activity-7193958115556343808-8UzK?utm_source=share&utm_medium=member_desktop |
| Mokingjay Technique Implementaion to avoid RWX region detection | https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-cybersecurity-malwaredevelopement-activity-7191049164409991168-fLwR?utm_source=share&utm_medium=member_desktop |
| Combining Unhooking and ETW patching to dump lsass.exe memory | https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F-activity-7188865881580453890-iakH?utm_source=share&utm_medium=member_desktop |
| Direct syscalls to dump lsass.exe memory and offline dumping | https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-lsassdump-malware-activity-7187820505746325504-l25o?utm_source=share&utm_medium=member_desktop |


## Disclaimer
The content, techniques, and tools provided in this repository are intended solely for educational and research purposes within the cybersecurity community. I explicitly disclaim any responsibility for the misuse or unlawful use of the provided materials. Any actions taken based on the information are done so at the user's own risk.

