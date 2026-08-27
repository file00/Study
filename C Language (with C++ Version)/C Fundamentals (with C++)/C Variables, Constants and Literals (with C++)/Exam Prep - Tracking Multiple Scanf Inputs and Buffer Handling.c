// [Title] Exam Prep - Tracking Multiple Scanf Inputs and Buffer Handling
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int age;
    char ch;

    // [Step 1] Read integer input
    // (Assume the user inputs: 25)
    scanf("%d", &age);

    // [Step 2] Read character input with leading space to clear buffer
    // (Assume the user inputs: 'a')
    scanf(" %c", &ch);   

    // [Step 3] Dynamic update using character conversion
    // 'a' (97) + 5 = 102, which is 'f'
    ch = ch + 5; 
    age = age + 10; // 25 + 10 = 35

    /* 
     * [Trap 1] Multi-line comment bypassing a misleading input rewrite
     * scanf(" %c", &ch);
     */

    // [Step 4] Final sequence output
    printf("%c\n", ch);
    printf("%d", age);

    return 0;
}
