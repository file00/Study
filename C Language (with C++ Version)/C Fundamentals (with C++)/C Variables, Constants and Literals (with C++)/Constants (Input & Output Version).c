// Constants (Input & Output Version)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    double PI;

    // Input
    printf("PI : ");
    scanf("%lf", &PI);

    // Output
    printf("%f\n", PI);
    printf("%.2f", PI);

    return 0;
}