#include <stdio.h>
#define Print_array_2n(list) \
    for (int i = 0; i < (int)(sizeof(list)/sizeof(list[0])); i++)\
    {\
        for (int j = 0; j < (int)(sizeof(list[0])/sizeof(list[0][0])); j++)\
            printf("%d\t",list[i][j]);\
        putchar('\n');\
    }\


int main(void)
{
    int nList[5][5] = {0};
    int count = 0;
    for(int i = 0; i < (int)(sizeof(nList)/sizeof(nList[0])); i++){
        if(i%2==0){
            for(int j = 0; j < (int)(sizeof(nList[0])/sizeof(nList[0][0])); j++)
                nList[i][j] = ++count;
        }else{
            for(int j = (int)(sizeof(nList[0])/sizeof(nList[0][0])) -1; j >= 0; j--)
                nList[i][j] = ++count;
        }
    }
    Print_array_2n(nList);
    return 0;
}