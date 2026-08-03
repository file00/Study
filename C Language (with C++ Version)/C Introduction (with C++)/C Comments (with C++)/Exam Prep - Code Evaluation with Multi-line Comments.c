// [Title] Exam Prep - Code Evaluation with Multi-line Comments
#include <stdio.h>

int main() {
    int age = 25;

    /* 
    age = age + 10;
    age = age * 2;
    [Trap 1] Multi-line comment disables these operations completely.
    */

    age = age + 5; /* [Trap 2] Inline multi-line comment */ age = age * 2;

    /*
    printf("Age: %d\n", age);
    [Trap 3] This print statement is ignored by the compiler.
    */

    printf("Result: %d", age);

    return 0;
}
