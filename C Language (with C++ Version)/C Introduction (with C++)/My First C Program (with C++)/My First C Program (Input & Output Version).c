// My First C Program (Input & Output Version)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char greeting[50];

    fgets(greeting, sizeof(greeting), stdin);
    printf("%s", greeting);

    return 0;
}
