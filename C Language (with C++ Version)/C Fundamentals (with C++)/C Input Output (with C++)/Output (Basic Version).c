// Output (Basic Version)

#include <stdio.h>

int main()
{
    printf("|%d|\n", 456);
    printf("|%4d|\n", 456);
    printf("|%-4d|\n", 456);
    printf("|%04d|\n", 456);
    printf("|%4.1f|\n", 456.2);
    printf("|%05.3f|\n", 456.32);
    printf("|%6.2f|\n", 456.89);

    return 0;
}