#include <stdio.h>

int main() {

    char szName[32] = { 0 };

    printf("Enter your Name : ");
    gets(szName);

    printf("Your Name is ");
    puts(szName);
    puts(".~~");
    
    return 0;
}