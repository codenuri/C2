#include <stdio.h>

void f1(int n, ...) {} // __cdecl
void __stdcall f2(int n, ...) {}        // ret 16
void __fastcall f3(int n, ...) {}

int main(void)
{
    f1(3,1,2,3);
        // 인자를 스택에 넣고
        // call _f1
        // add esp, 16
    f2(3,1,2,3);
    f3(3,1,2,3);

}
