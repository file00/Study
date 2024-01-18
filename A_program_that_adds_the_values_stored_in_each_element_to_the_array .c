/* A program that adds the values stored in each element to the array */
#include <stdio.h>

void main() {
    char data[7] = {1, 2, 3, 4, 5, 6, 7};
    int result = 0, i;
    
    for (i = 0; i <= 7; i++) {
        result = result + data[i];
    }
    printf("result = %d\n", result);
}
