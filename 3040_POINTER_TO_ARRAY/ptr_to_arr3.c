#include <stdio.h>

int main(void)
{
    int n = 10;

    printf("%p\n", &n); // 주소
    printf("%d\n", n);  // 값, 10

    int x[3] = { 10, 20, 30 };

    printf("%p\n", &x); // 배열의 주소
    printf("%p\n", x);  // 값, 10,20,30 이 아니고
                        // 주소.

    int (*p1)[3] = &x; // 배열의 주소
    int *p2 = x;       // 배열의 주소가 아닌 10의 주소
}


















//
