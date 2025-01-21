#include <stdio.h>
#define Length_array(list)  (int)(sizeof(list)/sizeof(list[0]))
#define Exchange(a, b) int temp = a; a = b; b = temp;
#define Print_array(list)   for (int i = 0; i < Length_array(list); i++){printf("%d ",list[i]);} putchar('\n');

int main(void)
{
    int nList[5] = {30,50,10,20,40};
    Print_array(nList);   
    for (int i = 0; i < Length_array(nList) - 1; i++){
        int idx = i;
        for (int j = i; j < Length_array(nList); j++){
            if(nList[j] < nList[idx]){
                idx = j;
            }
        }
        Exchange(nList[i], nList[idx]);
        Print_array(nList);   
    }
    return 0;
}