#include <stdio.h>

struct People
{
    char name[8];
    int  age;
    int  height;
};
typedef struct People PEOPLE;

/*
#define offsetof( TYPE, MEMBER )  \
                    (size_t)&(((TYPE*)0)->MEMBER);
*/
#include <stddef.h>

int main(void)
{
    int n2 = offsetof( PEOPLE, height );
    printf("%d\n", n2);

    PEOPLE pe;
    printf("%p\n", &pe);       // 0x1000
    printf("%p\n", &(pe.age)); // 0x1008

    PEOPLE *p = 0;
    printf("%p\n", p);  // 0

    //p->age = 10; // error

    printf("%p\n", &(p->age) );  // 8

    size_t n = (size_t)&(((PEOPLE*)0)->age);
    printf("%d\n", n); // 8
}













//
