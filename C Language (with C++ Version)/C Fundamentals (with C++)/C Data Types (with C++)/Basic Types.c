// [Title] Basic Types 
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
    
    printf("size of int = %zu bytes\n", sizeof(int));
    printf("size of float = %zu bytes\n", sizeof(float));
    printf("size of double = %zu bytes\n", sizeof(double));
    printf("size of char = %zu bytes\n", sizeof(char));
    printf("size of short = %zu bytes\n", sizeof(short));
    printf("size of long = %zu bytes\n", sizeof(long));
    printf("size of long long = %zu bytes\n", sizeof(long long));
    printf("size of long double = %zu bytes\n", sizeof(long double));
    
  return 0;
}
