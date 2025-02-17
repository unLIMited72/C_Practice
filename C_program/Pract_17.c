#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char szBuffer[12] = { "TestString" };
    char* pszDate = "TestString";

    printf("%d\n", memcmp(szBuffer, pszDate, 10));
    printf("%d\n", memcmp("teststring", pszDate, 10));
    printf("%d\n", memcmp("DataString", pszDate, 10));

    return 0;
}