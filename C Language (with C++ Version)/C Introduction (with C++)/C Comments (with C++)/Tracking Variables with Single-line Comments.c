// [Title] Tracking Variable States and Commented-out Code
#include <stdio.h>

int main() {
    int age = 25; 

    // age = 30; // [Trap 1] Commented-out line; completely ignored by the compiler.
    age = age + 5; // age turns into 30 (25 + 5)

    // printf("Age: %d\n", age); // [Trap 2] Suppressed statement; will not execute.
    age = age * 2; // age turns into 60 (30 * 2)

    printf("Result: %d", age); // [Output] Final result display

    return 0;
}
