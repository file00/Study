// [Title] Exam Prep - Character Representation Version 1 (Case Conversion Arithmetic)
#include <stdio.h>

int main() {
    
    char lower = 'a'; // ASCII value: 97
    char upper = 'F'; // ASCII value: 70
    int diff = 0;

    // [Step 1] Convert uppercase 'F' to lowercase 'f'
    // 70 + 32 = 102 (ASCII value for 'f')
    upper = upper + 32; 

    // [Step 2] Convert lowercase 'a' to uppercase 'A'
    // 97 - 32 = 65 (ASCII value for 'A')
    lower = lower - 32; 

    // [Step 3] Calculate character difference
    // 102 ('f') - 65 ('A') = 37
    diff = upper - lower;

    // [Step 4] Output results with different specifiers
    printf("%c\n", upper); // Prints character 'f'
    printf("%d", diff);    // Prints integer 37

    return 0;
}
