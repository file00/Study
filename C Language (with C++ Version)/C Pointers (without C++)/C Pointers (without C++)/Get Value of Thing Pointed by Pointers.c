// Get Value of Thing Pointed by Pointers

#include <stdio.h>

int main()
{
    int* pc, c;
    c = 5;
    pc = &c;
    
    printf("%d", *pc);   // Output: 5
    return 0;
}