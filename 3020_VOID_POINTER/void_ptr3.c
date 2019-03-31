int main(void)
{
    int n = 10;

    //char* p1 = &n; // C 언어 경고, C++ 에러
    char* p1 = (char*)&n; // ok

    void* p2 = &n; // ok

/*
    *p2;  // error
    p2 = p2 + 1; // error
    p2[0]; // *p2, error
*/

    if ( p2 == p1 ) {} // !=, =


    int*  p3 = (int*)p2; // ok
    char* p4 = p2; // ok
}

























//
