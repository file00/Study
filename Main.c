/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
