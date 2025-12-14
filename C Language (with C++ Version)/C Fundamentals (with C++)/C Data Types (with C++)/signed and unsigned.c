// signed and unsigned
#include <stdio.h>

int main() {
    
    // valid codes
    unsigned int x = 35;
    int y = -35;   
    int z = 36;   

    printf("x (unsigned int) = %u\n", x);
    printf("y (signed int) = %d\n", y);
    printf("z (signed int) = %d\n", z);

    // invalid code: unsigned int cannot hold negative integers
    // printf("num = %u\n", num);

    return 0;
}
