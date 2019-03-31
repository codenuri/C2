#include <stdio.h>

int main(void)
{
    //void  a; // error

    int n = 0x11223344;
    int    *p1 = &n;
    char   *p2 = (char*)&n; // 메모리에 있는 데이타의 정보 변경
    void   *p3 = &n; // ok. 주소 정보만.


    printf("%p\n",p1); // ok
    printf("%p\n",p2); // ok
    printf("%p\n",p3); // ok

    printf("%x\n", *p1); // 0x11223344
    printf("%x\n", *p2); // 0x44
    printf("%x\n", *p3); // error.
}



















//
