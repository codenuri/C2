int main(void)
{
    int n = 10;

    //char* p1 = &n; // C 경고, C++ 에러
    char* p1 = (char*)&n; // ok

    void* p2 = &n; // ok.

    //*p1;

    *p2;  // error
    p2 = p2 + 1; // error
    p2[0]; // *(p2+0) // error

    if ( p1 == p2 ) {}

    // 다른타입* = void*
    int  *p3 = (int*)p2; // C : ok.  C++: 에러.
    char *p4 = (char*)p2;


}

























//
