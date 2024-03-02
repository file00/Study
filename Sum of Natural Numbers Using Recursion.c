/* Sum of Natural Numbers Using Recursion */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main() {
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    result = sum(number);
    
    printf("sum = %d", result);
    result = 0;
}

int sum(int n) {
    if (n != 0)
        return n + sum(n-1);
    else
        return n;
}
