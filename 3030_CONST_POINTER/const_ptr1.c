#include <stdio.h>

int main(void)
{
    int n = 10;

    // *를 기준으로 const 의 위치를 조사
    const int *p1 = &n; // 상수를 가리키는 포인터
    int *const p2 = &n; // p2가 const
                        // p2를 따라가면 int
                        // 상수 포인터..
    int const *p3 = &n; // p1과 동일

    int n2 = 10;
    p1 = &n2; // ok
    *p1 = 20; // error
    p2 = &n2; // error
    *p2 = 20; // ok



    // c1, c2 는 완전히 동일합니다.
    const int c1 = 10;
    int const c2 = 10;
}

















//
