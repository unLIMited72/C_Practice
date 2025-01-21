#include <stdio.h>
#define clear_bit(data, loc)    ((data) &= ~(0x1<<(loc)))
#define clear_bits(data, area, loc)    ((data) &= ~((area)<<(loc)))
#define set_bit(data, loc)    ((data) |= (0x1<<(loc)))
#define set_bits(data, area, loc)    ((data) |= ((area)<<(loc)))
#define invert_bit(data, loc)   ((data) ^= (0x1<<(loc)))
#define invert_bits(data, area, loc)   ((data) ^= ((area)<<(loc)))
#define check_bit(data, loc)    ((data)&(0x1<<(loc)))
#define extract_bits(data, area, loc)   (((data)>>(loc))&(area))
#define PRINT_BINARY(byte)  for (int i = 7; i >= 0; i--) printf("%c", ((byte)&(0x1<<i)) ? '1' : '0'); putchar('\n');


int main(void)
{
    unsigned char a = 0xf0;
    unsigned char b;

    printf("Original bit : ");
    PRINT_BINARY(a);
    
    clear_bit(a, 5);
    printf("Clear bit Num5 : ");
    PRINT_BINARY(a);

    clear_bits(a,0x7, 3);
    printf("Clear bits Num 5,4,3 : ");
    PRINT_BINARY(a);

    set_bit(a, 5);
    printf("Set bit Num5 : ");
    PRINT_BINARY(a);

    set_bits(a, 0x7, 3);
    printf("Set bits Num 5,4,3 : ");
    PRINT_BINARY(a);
    
    invert_bit(a, 5);
    printf("Invert bit Num 5 : ");
    PRINT_BINARY(a);

    invert_bits(a, 0x7, 3);
    printf("Invert bits Num 5,4,3 : ");
    PRINT_BINARY(a);
    
    if(check_bit(a, 5)){
        printf("bit 5 is true\n");
    }else{
        printf("bit 5 is false\n");
    }
    
    printf("b binary : ");
    b = extract_bits(a,0x7,4);
    PRINT_BINARY(b);

    return 0;
}