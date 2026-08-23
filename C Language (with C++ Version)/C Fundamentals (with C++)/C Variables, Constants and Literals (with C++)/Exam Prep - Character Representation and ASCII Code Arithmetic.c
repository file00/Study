// [Title] Exam Prep - Character Representation and ASCII Code Arithmetic
#include <stdio.h>

int main() {
    
    int age = 25;
    char ch = 'a'; // ASCII value of 'a' is 97

    // [Step 1] Arithmetic operation with a character variable
    ch = ch + 2;   // 'a' (97) + 2 = 99, which corresponds to 'c'
    age = age + ch; // 25 + 99 = 124

    // [Step 2] Modify character variable again
    ch = 'A';      // ASCII value of 'A' is 65

    // [Step 3] Output values with matching format specifiers
    printf("%c\n", ch);   // Prints character character 'A'
    printf("%d", age);    // Prints integer value 124

    return 0;
}
