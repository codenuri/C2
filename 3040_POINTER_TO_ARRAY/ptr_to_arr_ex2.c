#include <stdio.h>

// 2차원 배열 2개를 받아서
// 2차원 배열을 반환하는 함수.
int (*add_matrix( int (*p1)[2], int (*p2)[2]   ))[2]
{
    static int temp[2][2];
    temp[0][0] = p1[0][0] + p2[0][0];
    temp[0][1] = p1[0][1] + p2[0][1];
    temp[1][0] = p1[1][0] + p2[1][0];
    temp[1][1] = p1[1][1] + p2[1][1];

    return temp;
}

int main(void)
{
    int x[2][2] = { 1,2,3,4};
    int y[2][2] = { 5,6,7,8};

    int(*ret)[2] = add_matrix(x, y);
    //int(*ret2)[2] = add_matrix(y, x);
    printf("%d, %d\n", ret[0][0], ret[0][1]);
    printf("%d, %d\n", ret[1][0], ret[1][1]);
}








//
