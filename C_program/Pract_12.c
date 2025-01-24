#include <stdio.h>

int maxCompare(int a, int b, int c)
{
    int nMax = a;
    if(nMax < b) nMax = b;
    if (nMax < c) nMax = c;

    return nMax;
}

int main(void){
    int a = 0, b = 0, c = 0;
    printf("Enter the '3' number to find max : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Max : %d\n",maxCompare(a,b,c));
    return 0;
}