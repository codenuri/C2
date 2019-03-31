#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 할당된 메모리를 char[160]으로 사용하고 싶다.
    char* p1 = (char*)malloc(160);

    // 할당된 메모리를 int[40]으로 사용하고 싶다.
    int *p2 = (int*)malloc(160);

    // 할당된 메모리를 int[10][4]으로 사용하고 싶다.
    // 2차원배열 이름 => 1차배열을 가리키는 포인터 의미
    int (*p3)[4] = ( int (*)[4]   ) malloc(160);
    // p3[10][4]
    p3[0][1] = 10;

    // int[4][5][2]
    //
    int(*p4)[5][2] = ( int(*)[5][2]   ) malloc(160);
    p4[0][0][0] = 10;

    free(p1);
    free(p2);
    free(p3);
    free(p4);

}






//
