bits 64
extern printf

section .data
    message db 'Hello, Holberton',10,0

section .text
    global main
    main:
        mov rdi, message
        mov rax, 0
        call printf
        mov rax, 0
        ret
