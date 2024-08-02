section .data
	hello db 'Hello, Holberton', 0 	; The string to print.
	fmt db '%s', 10, 0		; Format string for printf with new line.

section .text
	global main			; Is the entry point of program.

extern printf				; Declares printf function.

main:
	; Set up the stack frame
	push rbp
	mov rbp, rsp

	;align stack to 16-byte before calling printf
	sub rsp, 16

	; load address of the format string into rdi
	lea rdi, [rel fmt]

	; loads the address of the hello string into rsi
	lea rsi, [rel hello]

	; clear rax registry
	xor rax, rax

	; Call printf
	call printf

	; Restore stack pointer
	add rsp, 16

	; Clean up the stack frame and return
	mov rsp, rbp
	pop rbp
	ret
