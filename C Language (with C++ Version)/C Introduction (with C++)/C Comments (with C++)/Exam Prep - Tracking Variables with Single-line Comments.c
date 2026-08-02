// [Title] Exam Prep - Tracking Variables with Single-line Comments
#include <stdio.h>

int main() {
    int age = 25; 

    // age = 30; // [Trap 1] This line is completely ignored by the compiler
    age = age + 5; // age becomes 30

    // printf("Age: %d\n", age); // [Trap 2] This print statement will not execute
    age = age * 2; // age becomes 60

    printf("Result: %d", age); // [Step 1] Final output statement

    return 0;
}
