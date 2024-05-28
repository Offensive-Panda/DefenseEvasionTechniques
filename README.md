<html>
<body>
 <div>
  <h1>C:\Users\Offensive-Panda>whoami</h1>
  <p>My name is <B>Usman Sikander</B> (a.k.a Offensive-Panda). I am passionate about identifying, researching advanced evasion techniques and analyzing real-world samples to extract TTPs to validate security posture through APT emulations. With a proven track record in developing undetected exploits across MITRE ATT&CK tactics and automating exploit processes, I excel in comprehensive endpoint simulations in controlled environment with the presence of security controls. </p>
</div>
 <div class="container">
        <h1>My Social Profiles</h1>
    <div style="display: flex; justify-content: center; align-items: center; gap: 20px; padding: 20px;">
        <a href="https://www.linkedin.com/in/usman-sikander13/" target="_blank" style="text-decoration: none; color: #000; display: flex; align-items: center; gap: 10px;">
            <img src="https://cdn-icons-png.flaticon.com/512/174/174857.png" alt="LinkedIn" style="width: 24px; height: 24px;">
            LinkedIn
        </a>
        <a href="https://medium.com/@merasor07" target="_blank" style="text-decoration: none; color: #000; display: flex; align-items: center; gap: 10px;">
            <img src="https://cdn-icons-png.flaticon.com/512/2111/2111505.png" alt="Medium" style="width: 24px; height: 24px;">
            Medium
        </a>
        <a href="https://twitter.com/UsmanSikander13" target="_blank" style="text-decoration: none; color: #000; display: flex; align-items: center; gap: 10px;">
            <img src="https://cdn-icons-png.flaticon.com/512/733/733579.png" alt="Twitter" style="width: 24px; height: 24px;">
            Twitter
        </a>
    </div>
 </div>
 <br>
 <div align=center>
<img src="https://github.com/Offensive-Panda/DefenseEvasionTechniques/raw/main/My-Setup.jpg" alt="MYSETUP" width="1200" height="500">
</div>
    <h1 align=center>Defense Evasion Techniques</h1>
   <p>Welcome to the Defense Evasion Techniques Repository! This curated collection offers advanced methods to bypass sophisticated security measures in Endpoint Detection and Response (EDR) and Extended Detection and Response (XDR) systems. Aimed at cyber security professionals and researchers, these techniques are invaluable for both Red Team and Blue Team operations.This repository includes strategies for manipulating system calls, obfuscating code, managing memory to evade detection and other advanced evasion techniques. By leveraging these methods, experts can enhance penetration testing, red teaming, malware analysis, and develop more resilient defenses.</p>
    <h2>Evasion Techniques</h2>
 <table>
        <tr>
            <th>Technique</th>
            <th>Description</th>
        </tr>
        <tr>
            <td>Syscalls</td>
            <td>Exploring ways to manipulate system calls to evade detection.</td>
        </tr>
        <tr>
            <td>Direct and Indirect Calls</td>
            <td>Strategies for making direct and indirect function calls to evade detection mechanisms.</td>
        </tr>
        <tr>
            <td>API Hashing</td>
            <td>Techniques for obfuscating and altering API calls to avoid detection.</td>
        </tr>
        <tr>
            <td>Obfuscation</td>
            <td>Methods to obfuscate code and make it harder to analyze.</td>
        </tr>
        <tr>
            <td>Encryption</td>
            <td>Use of encryption to bypass static analysis of EDRs.</td>
        </tr>
        <tr>
            <td>Egg Hunting</td>
            <td>Syscall Instruction In-memory patching to bypass static detection.</td>
        </tr>
        <tr>
            <td>Random Instructions and Prototypes</td>
            <td>Use random NOP instructions and name of API, prototypes to avoid static analysis.</td>
        </tr>
        <tr>
            <td>Mokingjay</td>
            <td>Use of vulnerable dll to avoid detection of RWX memory region creation.</td>
        </tr>
        <tr>
            <td>Forking Technique</td>
            <td>Use of windows fork API to clone parent process after injecting shellcode, avoid detection of CreateRemoteThread.</td>
        </tr>
        <tr>
            <td>Unhooking</td>
            <td>Unhooking EDRs user mode hooks using clean copy of dll, raw copy from remote server, suspended process to bypass EDRs.</td>
        </tr>
        <tr>
            <td>ETW Patching</td>
            <td>Applying ETW patching to avoid event based detection.</td>
        </tr>
        <tr>
            <td>PEB Lookup</td>
            <td>Resolving SSN and Native API's on run-time using PEB lookup for 32bits & 64bits.</td>
        </tr>
   <tr>
            <td>RWX Memory Block Hunt</td>
            <td>Hunt for already created RWX region to write and execute shellcode. This technique remove the dependencies of vulnerable DLL with RWX and API to allocate RWX.</td>
        </tr>
    </table>
   <h2>My Blogs</h2>
    <table class="blogs-table">
        <tr>
            <th>Blogs</th>
            <th>Links</th>
        </tr>
        <tr>
            <td>Arsenal: Bypass EDR’s/XDR’s and make malware analysis harder</td>
            <td><a href="https://systemweakness.com/arsenal-bypass-edrs-xdr-s-and-make-malware-analysis-harder-6fde3e2884a5">https://systemweakness.com/arsenal-bypass-edrs-xdr-s-and-make-malware-analysis-harder-6fde3e2884a5</a></td>
        </tr>
        <tr>
            <td>On-Disk Detection: Bypass AV’s/EDR’s using syscalls with legacy instruction, series of instructions and random nop instructions</td>
            <td><a href="https://medium.com/system-weakness/on-disk-detection-bypass-avs-edr-s-using-syscalls-with-legacy-instruction-series-of-instructions-5c1f31d1af7d">https://medium.com/system-weakness/on-disk-detection-bypass-avs-edr-s-using-syscalls-with-legacy-instruction-series-of-instructions-5c1f31d1af7d</a></td>
        </tr>
        <tr>
            <td>EASE POST-EXPLOITATION: Getting elevated reverse shell using DLL Hijacking and Mock Directories</td>
            <td><a href="https://medium.com/system-weakness/ease-post-exploitation-getting-elevated-reverse-shell-using-dll-hijacking-and-mock-directories-2fc2c7a3cdae">https://medium.com/system-weakness/ease-post-exploitation-getting-elevated-reverse-shell-using-dll-hijacking-and-mock-directories-2fc2c7a3cdae</a></td>
        </tr>
        <tr>
            <td>AV/EDR Evasion Using Direct System Calls (User-Mode vs kernel-Mode)</td>
            <td><a href="https://medium.com/@merasor07/av-edr-evasion-using-direct-system-calls-user-mode-vs-kernel-mode-fad2fdfed01a">https://medium.com/@merasor07/av-edr-evasion-using-direct-system-calls-user-mode-vs-kernel-mode-fad2fdfed01a</a></td>
        </tr>
        <tr>
            <td>Bypass “Mimikatz” using the Process Injection Technique</td>
            <td><a href="https://medium.com/system-weakness/bypass-mimikatz-using-process-injection-technique-6d2a8415fcd6">https://medium.com/system-weakness/bypass-mimikatz-using-process-injection-technique-6d2a8415fcd6</a></td>
        </tr>
        <tr>
            <td>Unveiling the Intricacies of AsyncRAT: A deployment in Colombia by the Blind Eagle Cyber Group</td>
            <td><a href="https://medium.com/@merasor07/unveiling-the-intricacies-of-asyncrat-a-deployment-in-colombia-by-the-blind-eagle-cyber-group-83b48cc415a7">https://medium.com/@merasor07/unveiling-the-intricacies-of-asyncrat-a-deployment-in-colombia-by-the-blind-eagle-cyber-group-83b48cc415a7</a></td>
        </tr>
        <tr>
            <td>Unveiling the Intricacies of SamSam Ransomware: A Comprehensive Analysis Plus Proactive Threat Emulation</td>
            <td><a href="https://medium.com/@merasor07/unveiling-the-intricacies-of-samsam-ransomware-a-comprehensive-analysis-plus-proactive-threat-bee37979f407">https://medium.com/@merasor07/unveiling-the-intricacies-of-samsam-ransomware-a-comprehensive-analysis-plus-proactive-threat-bee37979f407</a></td>
        </tr>
        <tr>
            <td>Dark Crystel RAT (DCrat) Detailed Analysis</td>
            <td><a href="https://medium.com/system-weakness/dark-crystel-rat-dcrat-detailed-analysis-94a2bcccd5ce">https://medium.com/system-weakness/dark-crystel-rat-dcrat-detailed-analysis-94a2bcccd5ce</a></td>
        </tr>
    </table>
 <h2>My Posts</h2>
 <table class="my-posts">
   <tr>
            <td>Dirty vanity implementaion using direct syscalls</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_malwaredevelopment-syscalls-forking-activity-7193958115556343808-8UzK?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_malwaredevelopment-syscalls-forking-activity-7193958115556343808-8UzK?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
        <tr>
            <td>Mokingjay Technique Implementaion to avoid RWX region detection</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-cybersecurity-malwaredevelopement-activity-7191049164409991168-fLwR?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-cybersecurity-malwaredevelopement-activity-7191049164409991168-fLwR?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
        <tr>
            <td>Combining Unhooking and ETW patching to dump lsass.exe memory</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F-activity-7188865881580453890-iakH?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F-activity-7188865881580453890-iakH?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
        <tr>
            <td>Direct syscalls to dump lsass.exe memory and offline dumping</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-lsassdump-malware-activity-7187820505746325504-l25o?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_offensivesecurity-lsassdump-malware-activity-7187820505746325504-l25o?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
   <tr>
            <td>Remote Template Injection</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_remote-template-injection-today-i-created-activity-6936948079807844353-UQQ8?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_remote-template-injection-today-i-created-activity-6936948079807844353-UQQ8?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
   <tr>
            <td>Mark-of-the-Web for Red Team</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_bypass-macro-vba-activity-6900000010717458433-lAH2?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_bypass-macro-vba-activity-6900000010717458433-lAH2?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
   <tr>
            <td>Memory dump using outflank dumpert and Windows process injection</td>
            <td><a href="https://www.linkedin.com/feed/update/urn:li:activity:7056950152242094080?utm_source=share&utm_medium=member_android">https://www.linkedin.com/feed/update/urn:li:activity:7056950152242094080?utm_source=share&utm_medium=member_android</a></td>
        </tr>
   <tr>
            <td>Nt-Authority Shell using Fodhelper</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F%3F-activity-7072507221774917632-T0LK?utm_source=share&utm_medium=member_android">https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F%3F%3F%3F%3F%3F%3F%3F%3F-%3F%3F%3F%3F-activity-7072507221774917632-T0LK?utm_source=share&utm_medium=member_android</a></td>
        </tr>
    <tr>
            <td>RWX-Memory hunt and injection with CreateRemoteThread</td>
            <td><a href="https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F-%3F%3F%3F%3F%3F%3F-activity-7196426924351488001-RXOk?utm_source=share&utm_medium=member_desktop">https://www.linkedin.com/posts/usman-sikander13_%3F%3F%3F-%3F%3F%3F%3F%3F%3F-activity-7196426924351488001-RXOk?utm_source=share&utm_medium=member_desktop</a></td>
        </tr>
 </table>
  <h2>Github Repo</h2>
 <table class="my-code">
   <tr>
            <td>"D3MPSEC" is a memory dumping tool designed to extract memory dump from Lsass process using various techniques, including direct system calls, randomized procedures, and prototype name obfuscation. Its primary purpose is to bypass both static and dynamic analysis techniques commonly employed by security measures.</td>
            <td><a href="https://github.com/Offensive-Panda/D3MPSEC">https://github.com/Offensive-Panda/D3MPSEC</a></td>
        </tr>
        <tr>
            <td>Combination of multiple evasion techniques to evade defenses. (Dirty Vanity)</td>
            <td><a href="https://github.com/Offensive-Panda/DV_NEW">https://github.com/Offensive-Panda/DV_NEW</a></td>
        </tr>
    <tr>
            <td>Capture_attacks_using_honeypots</td>
            <td><a href="https://github.com/Offensive-Panda/Collect_Threat_Intel_AND_Malware_Using_Honeypots">https://github.com/Offensive-Panda/Collect_Threat_Intel_AND_Malware_Using_Honeypots</a></td>
        </tr>
   <tr>
            <td>Persistence_AND_Anti_Sandbox</td>
            <td><a href="https://github.com/Offensive-Panda/Persistence_AND_Anti_Sandbox">https://github.com/Offensive-Panda/Persistence_AND_Anti_Sandbox</a></td>
        </tr>
    <tr>
            <td>on-disk-detection-bypass</td>
            <td><a href="https://github.com/Offensive-Panda/on-disk-detection-bypass">https://github.com/Offensive-Panda/on-disk-detection-bypass</a></td>
        </tr>
    <tr>
            <td>C2_Elevated_Shell_DLL_Hijcking</td>
            <td><a href="https://github.com/Offensive-Panda/C2_Elevated_Shell_DLL_Hijcking">https://github.com/Offensive-Panda/C2_Elevated_Shell_DLL_Hijcking</a></td>
        </tr>  
      <tr>
            <td>Rwx Hunting and Injection using Fork API</td>
            <td><a href="https://github.com/Offensive-Panda/RWX_MEMEORY_HUNT_AND_INJECTION_DV">https://github.com/Offensive-Panda/RWX_MEMEORY_HUNT_AND_INJECTION_DV</a></td>
        </tr>  
 </table>
    <br>
 <h2> Evasion Mastery and Deep dive into threats. </h2>
 <br>
 <iframe src="Defense_Evasion.pdf" width="600px" height="750px">
 </iframe>
    
<div class="disclaimer">
        <h2>Disclaimer</h2>
        <p>The content, techniques, and tools provided in this repository are intended solely for educational and research purposes within the cybersecurity community. I explicitly disclaim any responsibility for the misuse or unlawful use of the provided materials. Any actions taken based on the information are done so at the user's own risk.</p>
    </div>
</body>
</html>
