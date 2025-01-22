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
    int top = 0, left = 0, bottom = (int)(sizeof(nList)/sizeof(nList[0])) -1, right = (int)(sizeof(nList[0])/sizeof(nList[0][0])) -1;
    int count = 1;

    while (count <= ((int)(sizeof(nList)/sizeof(nList[0]))) * ((int)(sizeof(nList[0])/sizeof(nList[0][0]))))
    {
        for (int i = left; i <= right; i++){
            nList[top][i] = count++;
        }
        top++;

        for (int i = top; i <= bottom; i++){
            nList[i][right] = count++;
        }
        right--;

        for (int i = right; i >= left; i--){
            nList[bottom][i] = count++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--){
            nList[i][left] = count++;
        }
        left++;
    }
    
    Print_array_2n(nList);
    return 0;
}