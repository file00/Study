// Arithmetic Operators (Input & Output Version)
// Working of arithmetic operators 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = a / b;   // 정수 나눗셈
    printf("a / b = %d\n", c);

    c = a % b;
    printf("Remainder when a divided by b = %d\n", c);

    return 0;
}