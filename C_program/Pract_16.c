#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char szBuffer[12] = { "HelloWorld" };
    char szNewBuffer[12] = { 0 };
    char* pszData = NULL;

    memcpy(szNewBuffer, szBuffer, 4);
    puts(szNewBuffer);

    memcpy(szNewBuffer, szBuffer, 6);
    puts(szNewBuffer);

    memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
    puts(szNewBuffer);

    pszData = (char*)malloc(sizeof(char)*12);
    for(int i = 0; i < 12; i++)
        pszData[i] = szBuffer[i];
        
    puts(pszData);
    free(pszData);
}