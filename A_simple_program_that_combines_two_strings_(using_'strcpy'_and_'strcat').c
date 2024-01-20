/* A simple program that combines two strings (using 'strcpy' and 'strcat') */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char data[15] = {'I', ' ', 'l', 'i', 'k', 'e', 0,};
    char result[20];
    
    strcpy(result, data);
    strcat(result, " you!!");
    printf("%s + \"you!!\" = %s\n", data, result);

    return 0;
}
