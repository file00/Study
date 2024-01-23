/* A programs that use pointers to add up the values stored in each element of the array */

#include <stdio.h>

void main() {
    char data[6] = { 1, 2, 3, 4, 5, 6 };
    int answer = 0, i;
    char *p = data;
    
    for(i = 0; i <= 6; i++) {
        answer = answer + *p;
        p++;
    }
    printf("Answer : %d", answer);

    return 0;
}
