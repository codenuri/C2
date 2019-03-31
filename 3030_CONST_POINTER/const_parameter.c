struct _rect
{
    int left, top, right, bottom;
};
typedef _rect RECT;

//void foo( RECT r) // call by value
//void foo( RECT* r)
void foo( const RECT* r) // 원본 수정되지 않는다.
{
    //r->left = 10; // error
}
int main(void)
{
    RECT r;
    foo(&r);
}







//
