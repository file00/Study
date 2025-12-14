// My First C Program (Input & Output Version)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];

    fgets(name, sizeof(name), stdin);
    printf("%s", name);

    return 0;
}
