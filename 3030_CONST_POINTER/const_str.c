#include <stdio.h>

int main(void)
{
    char s1[] = "hello"; // 문자열 배열
    //char  *s2 = "hello"; // 문자열 포인터

    const char  * s2 = "hello"; // 문자열 포인터
//    s2 = "world";
    *s1 = 'A'; // ok
    *s2 = 'A'; // 상수메모리인 경우도 있다.

    printf("%s\n", s1);
    printf("%s\n", s2);
}
