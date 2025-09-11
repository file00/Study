// Changing Value Pointed by Pointers 1

#include <stdio.h>

int main()
{
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    
    printf("%d\n", c);   // Output: 1
    printf("%d", *pc);   // Output: 1
    return 0;
}