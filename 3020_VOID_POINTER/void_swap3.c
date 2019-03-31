#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy

void swap(void *x, void *y, size_t es)
{
    // es 크기의 버퍼
    void *temp = malloc(es);

    memcpy( temp, x, es);
    memcpy( x, y, es);
    memcpy( y, temp, es);

    free(temp);
}

/*
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
*/

int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b, sizeof(a) );

    printf("%d, %d\n", a, b); // 20, 10
}
