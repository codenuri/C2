// 연습 문제

#define VAR(TYPE, NAME)  TYPE NAME##__LINE__

int main(void)
{
    // unique 한 이름을 사용하는 변수를 선언하는 매크로
    VAR(int, n); // int n6
    VAR(int, n); // int n7

}
