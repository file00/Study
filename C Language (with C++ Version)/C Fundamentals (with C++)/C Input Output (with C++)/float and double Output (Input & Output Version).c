// float and double Output (Input & Output Version)

#include <stdio.h>

int main() {
    
    float number1;
    double number2;

    // Taking user input for float
    printf("Enter a float value for number1: ");
    scanf("%f", &number1);

    // Taking user input for double
    printf("Enter a double value for number2: ");
    scanf("%lf", &number2);

    // Outputting the values
    printf("number1 = %f\n", number1);
    printf("number2 = %lf\n", number2);
    
    return 0;
}