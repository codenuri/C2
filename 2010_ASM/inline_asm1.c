#include <stdio.h>

int foo()
{
    //return 100; // eax = 100

    __asm { mov eax, 100 }
}

int main(void)
{
    int n = 0;
    //n = foo();

    __asm
    {
        call foo
        mov  n, eax
    }

    printf("result : %d\n", n);
}























//
