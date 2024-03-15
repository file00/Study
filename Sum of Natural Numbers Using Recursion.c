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

/* Sum of Natural Numbers Using for Loop */
// int main() {
//     int n, i, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; ++i) {
//         sum += i;
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }

/* Sum of Natural Numbers Using while Loop */
// int main() {
//     int n, i, sum = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     i = 1;

//     while (i <= n) {
//         sum += i;
//         ++i;
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }
