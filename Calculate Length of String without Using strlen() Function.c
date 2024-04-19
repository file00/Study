/* Calculate Length of String without Using strlen() Function */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char s[40];
    int i;

    printf("Input: ");
    fgets(s, 40, stdin);

    for (i = 0; s[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
    
    return 0;
}
