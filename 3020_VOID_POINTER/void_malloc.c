#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p1 = malloc(40);
    //*p1 = 10; // error

    char *p2 = (char*)malloc(sizeof(char)*40);

    int *p3 = (int*)malloc(sizeof(int)*10);

    int *p4 = (int*)malloc(sizeof(double)*5);

    // 40 바이트를 short의 2차원 배열 4*5
    short (*p5)[5] = (short(*)[5] )malloc(sizeof(short)*10);

    p5[0][1] = 10;


}





















//
