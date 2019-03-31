; asm5.asm - 스택을 사용한 인자 전달

segment  .text
    global  _asm_main

_asm_main:

    push    2
    push    1
    call    sum1    ; push 돌아올 주소
                    ; jmp sum1
;    add     esp, 8  ; 호출자(caller) 파괴,


    ret

sum1:
    mov     eax, DWORD [esp+4]  ; 1
    add     eax, DWORD [esp+8]  ; 2
    ret     8     ; 스택위에 돌아갈 주소가 있다.



















;
