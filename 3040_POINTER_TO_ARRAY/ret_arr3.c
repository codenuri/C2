
int* f1()
{
    static int x[2] = {0};
    return x;
}

int main(void)
{
    int* ret = f1();
    ret[0] = 10; // bug
}
