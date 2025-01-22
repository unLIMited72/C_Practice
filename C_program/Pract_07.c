#include <stdio.h>
#define Print_array_2n(list) \
    for (int i = 0; i < (int)(sizeof(list)/sizeof(list[0])); i++)\
    {\
        for (int j = 0; j < (int)(sizeof(list[0])/sizeof(list[0][0])); j++)\
        {\
            printf("%d\t",list[i][j]);\
        }\
        putchar('\n');\
    }\
    


int main(void)
{
    int nlist[5][5] = {0};
    int count = 1;
    for (int i = 0; i < (int)(sizeof(nlist)/sizeof(nlist[0])); i++)
    {
        for (int j = 0; j < (int)(sizeof(nlist)/sizeof(nlist[0])); j++)
        {
            nlist[i][j] = count++;
        }   
    }
    Print_array_2n(nlist);
    return 0;
}