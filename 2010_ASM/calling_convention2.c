#include <stdio.h>

void f1(int a, int b) // __cdecl
{
     printf("%d, %d\n", a, b);
}
void __stdcall f2(int a, int b)
{
     printf("%d, %d\n", a, b);
}
void __fastcall f3(int a, int b)
{
     printf("%d, %d\n", a, b);
}
void __fastcall f4(int a, int b, int c, int d)
{
     printf("%d, %d, %d, %d\n", a, b, c, d);
}
int main(void)
{
    f1(1,2);
    f2(1,2);
    f3(1,2);
    f4(1,2,3,4);
}











//
