/* A program that receives and outputs human body information using structures */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Person {
    char name[20];
    unsigned short int age;
    float height;
    float weight;
} Person;

int main() {
    Person data;
    
    printf("Please enter the information : ");
    printf("Name : ");
    scanf("%s", data.name);
    printf("Age : ");
    scanf("%hu", &data.age);
    printf("Height : ");
    scanf("%f", &data.height);
    printf("Weight : ");
    scanf("%f", &data.weight);

    printf("Result : %s, %d, %.1f[cm], %.1f[kg]", data.name, data.age, data.height, data.weight);
    return 0;
}