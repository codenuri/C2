#include <stdio.h>


// int(int, int) : 함수 타입
int Add(int a, int b)
{
     return a + b;
}

int main(void)
{
    int x[3] = { 1,2,3}; // int[3] : 배열 타입
    int (*p1)[3]  = &x;  // int (*)[3] : 배열을 가리키는
                        //              포인터 타입

    int (*p2)(int, int) = &Add;
                        // int (*)(int, int)
}






 //
