#include <stdio.h>
#define Length_array(list)  (int)(sizeof(list)/sizeof(list[0]))
#define Exchange(a, b) int temp = a; a = b; b = temp;
#define Print_array(list)   for (int i = 0; i < Length_array(list); i++){printf("%d ",list[i]);} putchar('\n');


int main(void)
{
    int nList[5] = {50,40,10,50,20};

    for(int i = 0; i < Length_array(nList) - 1; i++){
        for (int j = i; j < Length_array(nList); j++){
            if(nList[j] > nList[i]){
                Exchange(nList[j], nList[i]);
            }
        }
    }
    Print_array(nList);
    return 0;
}