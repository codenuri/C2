
typedef int AR[2];  // 배열 타입
typedef int(*PAR)[2]; // 배열을 가리키는 포인터 타입

// 2차원 배열 2개를 받아서 2차원 배열을 반환하는 함수.
//AR* add_matrix( AR* p1, AR* p2   )
PAR add_matrix( PAR p1, PAR p2   )
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
    PAR ret = add_matrix(x, y);
}








//
