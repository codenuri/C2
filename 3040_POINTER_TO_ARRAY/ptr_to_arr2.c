#include <stdio.h>

int main(void)
{
    int    n = 10;
    double d = 3.4;
    int x[3] = {1,2,3};

    // 변수 n, d, x 의 주소를 담는
    // 포인터 변수 p1, p2, p3를 만드세요
    int    *p1 = &n;
    double *p2 = &d;
    //int *p3[3] = &x; // 우선순위 관계로 배열로 처리
    int (*p3)[3] = &x; 
}


















//
