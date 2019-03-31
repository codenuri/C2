; asm7.asm - 지역변수 만들기

segment  .text
    global  _asm_main

_asm_main:
    push    ebp
    mov     ebp, esp

    push    2
    push    1
    call    sum1
    add     esp, 8

    mov     esp, ebp
    pop     ebp
    ret

sum1:
    push    ebp
    mov     ebp, esp

    ; 지역변수 만들기
    sub     esp, 8      ; int x, y

    mov     DWORD[ebp-4], 100
    mov     DWORD[ebp-8], 200


    ;push    100
    mov     eax, DWORD [ebp+8]  ; 1
    add     eax, DWORD [ebp+12]  ; 2

    ; 지역변수 파괴
    mov     esp, ebp
    pop     ebp
    ret     0





















;
