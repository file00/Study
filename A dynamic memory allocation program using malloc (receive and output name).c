/* A dynamic memory allocation program using malloc (receive and output name) */
#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h> // Use malloc() and free().
#include <stdio.h>

int main() {
    char *p_name;
    p_name = (char *)malloc(64);
    if(p_name != NULL) {
        printf("Your name is : ");
        gets(p_name);
        
        printf("Hello, %s\n ", p_name);
        free(p_name);
    }
    else {
    printf("Error!!");

    return 0;
    }
}
