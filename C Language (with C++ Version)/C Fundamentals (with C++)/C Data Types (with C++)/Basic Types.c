/* Basic Types */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      
int main() {
    int i;
    float f;
    double db;
    char ch = 'A';
    short a;
    long b;
    long long c;
    long double d;
    
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
