/*
int Add(int a, int b)
{
    int x = 0;
    int y = 0;
    x = a + b;
    return x;
}

int main(void)
{
    int n = Add(1,2);
}
*/

int Add(int a, int b)   // push ebp
{                       // mov  ebp, esp
    int x = 0;          // sub  esp, 8
    int y = 0;          // mov  dword[ebp-4], 0
                        // mov  dword[ebp-8], 0

    x = a + b;          // mov eax, dword[ebp+8]
                        // add eax, dword[ebp+12]

                        // mov dword[ebp-4], eax

                        // mov   eax, dword[ebp-4]
    return x;           // mov   esp, ebp
}                       // pop   ebp
                        // ret
int main(void)
{
    int n = Add(1,2);   // push 2
                        // push 1
                        // call _Add
                        // add  esp, 8
                        // mov  dword[ebp-4], eax

}







//
