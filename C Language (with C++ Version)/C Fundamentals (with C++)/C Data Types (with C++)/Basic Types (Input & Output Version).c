// [Title] Basic Types (Input & Output Version)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Variable declarations
    int i;
    float f;
    double db;
    char ch;
    short s;
    long l;
    long long ll;
    long double ld;

    // Input values
    scanf("%d", &i);      // int input
    scanf("%f", &f);      // float input
    scanf("%lf", &db);    // double input
    scanf(" %c", &ch);    // char input (leading space removes newline)
    scanf("%hd", &s);     // short input
    scanf("%ld", &l);     // long input
    scanf("%lld", &ll);   // long long input
    scanf("%Lf", &ld);    // long double input

    // Output values
    printf("int = %d\n", i);
    printf("float = %f\n", f);
    printf("double = %f\n", db);
    printf("char = %c\n", ch);
    printf("short = %hd\n", s);
    printf("long = %ld\n", l);
    printf("long long = %lld\n", ll);
    printf("long double = %Lf\n", ld);

    // Output size of each data type (in bytes)
    printf("size of int = %zu bytes\n", sizeof(i));
    printf("size of float = %zu bytes\n", sizeof(f));
    printf("size of double = %zu bytes\n", sizeof(db));
    printf("size of char = %zu bytes\n", sizeof(ch));
    printf("size of short = %zu bytes\n", sizeof(s));
    printf("size of long = %zu bytes\n", sizeof(l));
    printf("size of long long = %zu bytes\n", sizeof(ll));
    printf("size of long double = %zu bytes\n", sizeof(ld));

    return 0;
}
