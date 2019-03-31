void foo(int n, ... )
{
}

int main(void)
{
    foo(1);     // ok
    foo(1,2);   // ok
    foo(1,2,3); // ok
    //foo();      // error
}
