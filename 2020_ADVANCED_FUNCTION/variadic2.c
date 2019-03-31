#include <stdio.h>

void foo(int n, ... )
{
    int *p = &n + 1;

    for ( int i = 0; i < n; i++)
    {
        printf("%d\n", *p);
        p = p + 1;
    }
}

int main(void)
{
    foo(7, 10, 20, 30, 40, 50, 60, 70);  // push 50
                                 // push 40
}
