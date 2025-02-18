#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char astrList[2][12] = {"Hello", "World"};
    char (*pstrList)[12] = astrList;

    puts(pstrList[0]);
    puts(pstrList[1]);
}