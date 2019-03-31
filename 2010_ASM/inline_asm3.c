
int foo() // windows cl, gcc => _foo
{         // linux gcc       => foo
    retrun 100;
}

int main()
{
    foo();

    __asm { call foo }  // cl => call _foo
    asm("call _foo");   // windows gcc
    asm("call foo");   // linux gcc
}
