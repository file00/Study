// Basic Types (Input & Output Version)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // Variable declarations
    int i;
    float f;
    double db;
    char ch;
    short a;
    long b;
    long long c;
    long double d;

    // Input values
    scanf("%d", &i);      // int input
    scanf("%f", &f);      // float input
    scanf("%lf", &db);    // double input
    scanf(" %c", &ch);    // char input (leading space removes newline)
    scanf("%hd", &a);     // short input
    scanf("%ld", &b);     // long input
    scanf("%lld", &c);    // long long input
    scanf("%Lf", &d);     // long double input

    // Output values
    printf("int = %d\n", i);
    printf("float = %f\n", f);
    printf("double = %lf\n", db);
    printf("char = %c\n", ch);
    printf("short = %hd\n", a);
    printf("long = %ld\n", b);
    printf("long long = %lld\n", c);
    printf("long double = %Lf\n", d);

    // Output size of each data type (in bytes)
    printf("size of int = %ld bytes\n", sizeof(i));
    printf("size of float = %ld bytes\n", sizeof(f));
    printf("size of double = %ld bytes\n", sizeof(db));
    printf("size of char = %ld bytes\n", sizeof(ch));
    printf("size of short = %ld bytes\n", sizeof(a));
    printf("size of long = %ld bytes\n", sizeof(b));
    printf("size of long long = %ld bytes\n", sizeof(c));
    printf("size of long double = %ld bytes\n", sizeof(d));

    return 0;
}