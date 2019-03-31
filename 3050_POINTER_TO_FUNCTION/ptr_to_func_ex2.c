#include <stdio.h>
#include <stdlib.h>

void foo(void)
{
    printf("프로그램의 종료시간 기록\n");
}

int main(void)
{
    //atexit(&foo);
    atexit(foo);

    printf("hello\n");

    if ( 1 )
        return 0;

    printf("world\n");

    // 프로그램이 종료되기 전에
    // foo 함수를 반드시 호출하고 싶다.
    //foo();
}
