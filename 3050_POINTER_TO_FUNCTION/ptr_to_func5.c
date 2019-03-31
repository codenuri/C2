#include <stdio.h>

int Add(int a, int b)
{
    printf("Add : %d, %d\n", a, b);
    return a + b;
}

// int Add(int a, int b); // 함수선언
// int (*f)(int, int);    // 함수 포인터 변수 선언

typedef int FUNC(int, int); // FUNC :함수 타입
typedef int (*PFUNC)(int, int); //PFUNC: 함수 포인터 타입

//void foo( int (*f)(int, int)   )

void foo( FUNC* f  )
//void foo( PFUNC f  )
{
    f(1,2); // Add(1,2)
}

//int(*  goo() )(int, int)

FUNC*  goo()
//PFUNC goo()
{
    return Add;
}

int main(void)
{
    foo( &Add );
    goo()(1,2); // Add(1,2)
}










//
