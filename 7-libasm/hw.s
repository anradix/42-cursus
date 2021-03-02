global _start

section .data
	msg db "Hello World!", 10    ; db: data byte, 10: ASCII newline
 	msg_L equ $-msg

section .text

_start:
	mov	rax, 1                      ; write
	mov	rdi, 1                      ; to stdout
	mov	rsi, msg                    ; starting at msg
	mov	rdx, msg_L                  ; for len bytes
	syscall
	jmp _exit

_exit:
	mov	rax, 60	                    ; exit
	mov	rdi, 0                      ; with success
	syscall
