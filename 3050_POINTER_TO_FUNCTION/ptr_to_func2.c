#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    Add(1,2);  // 함수 호출

    int (*f)(int, int) = &Add;

    // 함수호출하기
    // f  : 함수를 가리키는 포인터
    // *f : 함수
    (*f)(1,2); // Add(1,2) 동일
    // *f(1,2); // error

    f(1,2); // 역시 Add(1,2)의 의미
    (&Add)(1,2); // ok. Add(1,2)
}






//
