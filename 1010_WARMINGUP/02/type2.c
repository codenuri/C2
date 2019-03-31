/*
int n;  // n 은 변수
int *p; // p 는 포인터 변수
int x[3];  // x 배열 변수
void foo(int); // foo 함수

// typedef : 변수 자리의 심볼이 변수가 아닌 타입이 된다.
typedef int n;  // n 은 타입
typedef int *p; // p 는 포인터 타입
typedef int x[3];  // x 배열 타입
typedef void foo(int); // foo 함수 타입
foo goo; // void goo(int); // goo 함수 선언.

n a = 10; // int a = 10
x r = {1,2,3}; // int r[3] = {1,2,3}
*/
typedef int DWORD;
typedef int AR[2];
typedef int AR2[2][3];

int main(void)
{
    DWORD n = 0; // int n = 0

    AR x = {1,2}; // int x[2] = { 1,2}

    AR2 y = {0}; // int y[2][3] = {0};

    AR* p = &x;
}













//
