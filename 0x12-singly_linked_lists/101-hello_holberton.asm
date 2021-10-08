; stack protection
%ifidn __OUTPUT_FORMAT__,elf64
section .note.GNU-stack noalloc noexec nowrite progbits
%endif

default rel
extern	puts
global	main

section .text
main:
	mov  rdi, msg
	call puts WRT ..plt

	xor  eax,eax
	ret

section .rodata

msg:	db `Hello, Holberton`,0

;section .bss
;section .data
