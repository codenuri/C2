void f1( int n) {} // ok
//void f2( int a[3]) {}  // error

void f3( int (*a)[3]) // ok
{
    // a : 배열의 주소
    // *a : 배열
    *a[0]; // 1번째 요소.
}
void f4( int *a)
{
    *a; // 1번째 요소
    a[0]; // ""
    a[1]; // 2번째 요소..
}
int main(void)
{
    int n1 = 10;
    int n2 = n1;

    f1(n1);

    int x1[3] = {1,2,3};
    int x2[3] = x1; // error. 배열은 복사 될수 없다.

    //f2(x1);
    f3(&x1); // 주소 전달
    f4(x1); // 배열이름 전달.
}
