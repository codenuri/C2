#include <stdio.h>

int main(void)
{
    int n = 10;

    int       *p1 = &n; // ok
    const int *p2 = &n; // ok


    const int c = 10;

    //int       *p3 = &c; // C 경고, C++ 에러
    int       *p3 = (int*)&c; // ok ..

    const int *p4 = &c; // ok

    *p3 = 20; // ok

    printf("%d\n", c); // 10 ? 20




}
