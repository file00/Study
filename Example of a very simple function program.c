/* Example of a very simple function program */

#include <stdio.h>

int Sum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int result;
    result = Sum(4, 7);
    printf("a + b = %d\n", result);
}
 
