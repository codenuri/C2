#include <stdio.h>

void foo(int a);

int main(void)
{
    int n = 0;
    int x[3] = { 1,2,3};

    printf("%p\n", &n); // n狼 林家
    printf("%d\n", n);  // n狼 蔼

    printf("%p\n", &x); // 硅凯狼 林家
    printf("%p\n", x);  // 林家. 夸家 林家

    printf("%p\n", &foo); // 窃荐 林家.
    printf("%p\n", foo);  // 窃荐 林家.

    foo(10);

    int *p1 = &n;
    int (*p2)[3] = &x;
    void (*p3)(int) = &foo;
}


void foo(int a)
{
    printf("foo : %d\n", a);
}













//
