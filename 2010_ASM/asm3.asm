;asm3.asm

segment .text
    global _asm_main
_asm_main:

    ; 다른 함수 foo 호출
    ; mov     ebx, AAA
    ; push    AAA     ; 스택에 돌아올 주소를 넣는다.
    ; jmp     foo
;AAA:
    call    foo
    ret

foo:
    mov     eax, 300
    ;pop     ebx    ; 스택에서 꺼내서 ebx에 넣기
    ;jmp     ebx

    ret











;
