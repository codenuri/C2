#include <stdio.h>
#include <assert.h>

#define assert( expr )  \
    if ( !(expr) )  {    \
        printf("[] Assertion failed: %s, file %s, line %d\n", \
            #expr, __FILE__, __LINE__); \
        abort(); }


void foo( int age)
{
    // 인자의 유효성을 확인한다.
    assert( age > 0);

    // "함수인자인 age는 나이 이므로 0 보다는 클것이다"
    // 라고 가정하고 코드 작성
    //.....
}
int main(void)
{
    foo(-10);
}
