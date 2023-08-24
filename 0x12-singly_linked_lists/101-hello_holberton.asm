section .data
    message db 'Hello, Holberton', 0

section .text
    global _start

_start:
    push message
    call printf
    add esp, 4
    ret