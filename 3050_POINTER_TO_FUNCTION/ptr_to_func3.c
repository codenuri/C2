#include <stdio.h>

int Add(int a, int b)
{
    printf("Add : %d, %d\n", a, b);
    return a + b;
}

void foo( int (*f)(int, int)   )
{
    f(1,2); // Add(1,2)
}

// 1. 함수 포인터 타입을 만들자
// 2. 변수 자리에 ""함수이름()"
//int(*f)(int, int); // &Add 의 주소를 담는 함수 포인터

int(*  goo() )(int, int)
{
    //return &Add;
    return Add;
}

int main(void)
{
    //foo( &Add );
    // foo( Add );
    goo()(1,2); // Add(1,2)
}










//
