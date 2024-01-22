/* A simple program that receives a string using a scanf function */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char sample[42];
    
    printf("Input : ");
    scanf("%s", sample);
    printf("Output string : %s \n", sample);

    return 0;
}
