#include <stdio.h>

int foo()
{
    //return 100; // eax = 100

    //__asm { mov eax, 100 }

    asm("mov eax, 100");
}

int main(void)
{
    int n = 0;
    //n = foo();

/*
    __asm
    {
        call foo
        mov  n, eax
    }
*/
    asm("call  _foo\n\t"
        "mov   %0, eax\n\t"
        : "=m" (n)
    );


    printf("result : %d\n", n);
}























//
