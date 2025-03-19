section .data
    hello db 'Hello, World',0xA  ; Define the string with a newline (0xA)

section .text
    global _start                ; Entry point for the program

_start:
    ; Write the string to stdout (file descriptor 1)
    mov rax, 1                   ; syscall number for sys_write
    mov rdi, 1                   ; file descriptor 1 (stdout)
    mov rsi, hello               ; address of the string to print
    mov rdx, 13                  ; length of the string (12 characters + 1 for newline)
    syscall                      ; make the system call

    ; Exit the program
    mov rax, 60                  ; syscall number for sys_exit
    xor rdi, rdi                 ; return code 0
    syscall                      ; make the system call
