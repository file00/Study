/* Simple 'Pointer' example */

#include <stdio.h>

void main() {
    short hi;
    short *ptr; // Declare the pointer variable.
    ptr = &hi; //Substitute the address of the hi variable into the ptr variable.
    printf("Address of the variable in 'hi' = %p\n %d", ptr, ptr); // Out of pure curiosity, I decided to print the address in hexadecimal and decimal.

    return 0;
}




