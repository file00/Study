// Int Output (Basic Version)
#include <stdio.h>

int main()
{
    int sum;
    
    // Output 1
    sum = (int)16.3 + (int)18.7;
    printf("Output 1 : %d\n", sum);
    
    // Output 2
    sum = (int)(16.3 + 18.7);
    printf("Output 2 : %d", sum);

    return 0;
}