/* A simple program to receive values of integers and real numbers using scanf functions */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int data1;
    float data2;
    
    printf("Input : ");
    scanf("%d %f", &data1, &data2);
    printf("Output type int : %d\nOutput type float : %.2f\n", data1, data2);

    return 0;
}
