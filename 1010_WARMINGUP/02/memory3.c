#include <stdio.h>

int main(void)
{
    char s1[] = "Hello";
    //char *s2  = "Hello";

    const char *s2  = "Hello";

    *s1 = 'A';
    *s2 = 'A'; // runtime error

    printf("%s\n", s1);
    printf("%s\n", s2);
}
