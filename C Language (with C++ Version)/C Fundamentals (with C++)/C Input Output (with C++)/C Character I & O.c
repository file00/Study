// C Character I/O 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char chr;
    
    printf("Enter a character: ");
    scanf("%c",&chr);     
    
    printf("You entered %c.", chr);  
    
    return 0;
}   
