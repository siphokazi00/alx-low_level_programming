section .data
    hello_msg db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    extern printf

global _start

_start:
    ; Push the format string and the address of hello_msg onto the stack
    push format
    push hello_msg
    ; Call printf
    call printf
    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    mov rax, 60         ; syscall: sys_exit
    xor edi, edi        ; status: 0
    syscall
