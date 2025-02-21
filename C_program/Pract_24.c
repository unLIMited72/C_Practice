#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MyStrcpy(char* szBufferDst, unsigned int length, char* szBufferSrc);

int main(void)
{
    char szBufferSrc[12] = { "TestString" };
    char szBufferDst[12] = { 0 };

    MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
    puts(szBufferDst);
    return 0;
}

void MyStrcpy(char* szBufferDst, unsigned int length, char* szBufferSrc){
    for (unsigned int i = 0; i < length; i++)
    {
        *(szBufferDst + i) = *(szBufferSrc + i);
    }
}