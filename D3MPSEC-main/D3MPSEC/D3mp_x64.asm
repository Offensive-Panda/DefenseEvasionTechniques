.code

; Reference: https://j00ru.vexillium.org/syscalls/nt/64/

; Windows 10 Major / Server 2016 specific syscalls
 
ZOP proc
		mov r10, rcx
		mov eax, 26h
		syscall
		ret
ZOP endp

ZOC proc
		mov r10, rcx
		mov eax, 0Fh
		syscall
		ret
ZOC endp

NtCreateFile10 proc
		mov r10, rcx
		mov eax, 55h
		syscall
		ret
NtCreateFile10 endp

end
