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
    int aList[3][4] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            aList[i][3] += aList[i][j];
            if(i < 2)
                aList[2][j] += aList[i][j];
        }
    }
    Print_array_2n(aList);
    
    return 0;
}