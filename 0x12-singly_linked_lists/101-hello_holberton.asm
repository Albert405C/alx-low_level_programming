section .data
    format db "Hello, Holberton", 0  ; The format string

section .text
    global main
    extern printf

main:
    push rdi              ; Preserve rdi register
    mov  rdi, format      ; Load the address of the format string
    call printf          ; Call the printf function
    pop  rdi              ; Restore rdi register
    xor  eax, eax         ; Set the return value to 0
    ret                   ; Return from the main function

