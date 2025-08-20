// Program to create a simple calculator (with % operator)
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operation);  // Add space before %c -> to remove leftover newline in buffer
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
            break;

        case '/':
            if(n2 != 0)
                printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
            else
                printf("Error! Division by zero.");
            break;

        case '%':
            if((int)n2 != 0)
                printf("%d %% %d = %d", (int)n1, (int)n2, (int)n1 % (int)n2);
            else
                printf("Error! Modulo by zero.");
            break;

        // Operator doesn't match any of the supported cases +, -, *, /, %
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}
