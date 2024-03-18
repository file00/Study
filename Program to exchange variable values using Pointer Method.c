/* Program to exchange variable values using Pointer method */

#include <stdio.h>

void Swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void main() {
    int begin = 1, finish = 2;
    printf("Before : begin = %d, finish : %d\n", begin, finish);
    if(begin < finish) {
        Swap(&begin, &finish);
    }
    printf("After : begin = %d, finish = %d", begin, finish);
}
