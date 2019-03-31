; asm4.asm

segment  .text
    global  _asm_main

_asm_main:

    mov     edx, 2
    mov     ecx, 1
    call    sum1
    ret

sum1:
    mov     eax, ecx        ; eax = ecx
    add     eax, edx        ; eax += edx
    ret
















;
