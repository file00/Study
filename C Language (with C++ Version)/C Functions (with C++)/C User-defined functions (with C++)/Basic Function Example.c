/* Basic Function Example */
#include <stdio.h>

int a = 100;

void func() {
    int a = 200;
    printf("in func a : %d\n", a);    
}

int main() {
    func();
    printf("in main a : %d\n", a);
    return 0;
}