#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int* pList = NULL; 
    int* pNewList = NULL;
    
    pList = (int*)malloc(sizeof(int)*3);
    memset(pList, 0, sizeof(int)*3);

    pNewList = (int*)calloc(3, sizeof(int));

    for (int i = 0; i < 3; i++)
        printf("pList[%d] : %d\n", i, pList[i]);
    for (int i = 0; i < 3; i++)
        printf("pNewList[%d] : %d\n", i, pNewList[i]);

    free(pList);
    free(pNewList);
}