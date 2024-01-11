//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Change it to Fahrenheit (F) at intervals of 5 degrees (C) from 0 degrees Celsius to 100 degrees Celsius and output it. */
int main() { 

int celsius;

for (size_t celsius = 0; celsius < 101; celsius += 5) {
    float fahrenheit = celsius * 1.8 + 32;
    printf("%d\t%.2f\n", celsius, fahrenheit);
    } return 0;
printf("화씨(F) = %d", celsius);
}