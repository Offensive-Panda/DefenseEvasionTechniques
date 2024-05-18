# DV_NEW

This is the combination of multiple evasion techniques. It is using direct syscalls to bypass user-mode EDR hooking and also to avoid static detection of syscalls instruction in stub I am using egg hunt technique. Egg hunt will place random bytes using DB instruction in syscall stub in the place of syscalls instructions and on run time it patch again those bytes with syscall instruction to transit into kernel. Also I am using random prototypes and procedures in order to bypass static analysis. This technique is testing on bitdefender and MDE both are bypassed. This technique is known as Dirty Vanity but the implementation of the technique is ordered in a way so that it can bypass security controls.

1) Direct syscalls.
2) Resolving SSN dynamically.
3) Syscall Instruction In-memory patching using egg hunt technique.
4) Windows API forking (Ghosting, Forking).
5) Random prototypes and procedures.

# Only for educational purposes.
# REF : https://www.deepinstinct.com/blog/dirty-vanity-a-new-approach-to-code-injection-edr-bypass
