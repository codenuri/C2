
void f1(int y[3]) {} // error
void f1(int *y) {}   // ok

int main(void)
{
    int x[3] = {1,2,3};
    //int y[3] = x;   // error
    int *y = x; // ok

    f1(x); // 배열전달..

}










// 1차 배열 => 포인터 타입으로 반환
//int f2()[3]
int* f2()
{
    int x[3] = {1,2,3};
    return x;
}



// 2차배열 => 1차배열을 가리키는 포인터
//int(*p)[2]
//int f3()[3][2] // error
int(*f3())[2]    // ok
{
    int x[3][2] = {1,2,3,4,5,6};
    return x;
}


// 3차 배열 이름 => 2차배열을 가리키는 포인터
int (* f4() )[2][2]
//? f4()
{
    int x[3][2][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
    return x;
}










//
