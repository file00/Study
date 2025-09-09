// C Functions

#include <stdio.h>

int Sum(int value1, int value2) {
    int result = value1 + value2;
    return result;
}

int main() {
    int a = 2, b = 3, value;
    value = Sum(a, b);
    
    printf("%d", value);
    
    return 0;
}