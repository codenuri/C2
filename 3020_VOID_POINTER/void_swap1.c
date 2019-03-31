#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(void)
{
    double a = 10;
    double b = 20;

    swap(&a, &b);

    printf("%d, %d\n", a, b); // 20, 10
}
