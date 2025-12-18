// Variables (Input & Output Version)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int age;
    char ch;

    printf("Age : ");
    scanf("%d", &age);

    printf("Character : ");
    scanf(" %c", &ch);   

    printf("%c\n", ch);
    printf("%d\n", age);

    printf("Character : ");
    scanf(" %c", &ch);
    printf("%c", ch);

    return 0;
}