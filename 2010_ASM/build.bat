nasm -f win32 -o asm.obj %2
cl %1  asm.obj /link /out:cl-result.exe /nologo
gcc %1 asm.obj -m32 -masm=intel -o gcc-result.exe
cl-result.exe
gcc-result.exe
