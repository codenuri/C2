#include <stdio.h>

void swap(void *x, void *y, size_t es)
{
    char *pc1 = (char*)x;
    char *pc2 = (char*)y;

    for ( int i = 0; i < es; i++)
    {
        char temp = pc1[i];
        pc1[i] = pc2[i];
        pc2[i] = temp;
    }
}
int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b, sizeof(a) );

    printf("%d, %d\n", a, b); // 20, 10
}
