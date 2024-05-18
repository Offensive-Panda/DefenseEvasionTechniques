

https://github.com/Offensive-Panda/D3MPSEC/assets/76246439/afdfc906-fe76-447d-ac52-a4dc9f25e075

# D3MPSEC using direct system calls and random procedures, prototypes names.
"D3MPSEC" is a memory dumping tool designed to extract memory dump from Lsass process using various techniques, including direct system calls, randomized procedures, and prototype name obfuscation. Its primary purpose is to bypass both static and dynamic analysis techniques commonly employed by security measures.
# Usage
1) Just open the project solution in visual studio and compile it. If you are facing any issue regarding assembler then right click on solution and go to build customization and make sure MASM is selected. 
2) This tool will only work on windows with major version (10.0).
3) This will only work when PPL protection is disabled.
4) Use tools like mimikatz or pypykatz to read the hashes from dumped file.

# Commands for offline dumping.
1) Mimikatz
   
   sekurlsa::minidump [filename]
   sekurlsa::logonpasswords
3) Pypykatz
   
   pypykatz lsa minidump [filename]
   

# This repository is only for educational purposes.
