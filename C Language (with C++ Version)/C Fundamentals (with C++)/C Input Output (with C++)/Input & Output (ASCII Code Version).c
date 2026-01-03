// Input & Output (ASCII Code Version)

#include <stdio.h>

int main() {
    
    char c;
    c = getchar();
    
    printf("%d\n", c);
    printf("%c\n", c);
    
    putchar('A');   
    printf("\n");
    
    putchar(65);
    
    return 0;
}