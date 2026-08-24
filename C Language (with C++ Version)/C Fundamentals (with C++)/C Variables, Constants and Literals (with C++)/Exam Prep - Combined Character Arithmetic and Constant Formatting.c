// [Title] Exam Prep - Combined Character Arithmetic and Constant Formatting
#include <stdio.h>

int main() {
    
    const double BONUS = 1.567;
    int score = 100;
    char grade = 'A'; // ASCII value of 'A' is 65

    /* 
     * [Trap 1] Attempting to modify a constant will cause a compile error.
     * BONUS = 2.5; 
     */

    // [Step 1] Character arithmetic: 'A' (65) + 3 = 68 ('D')
    grade = grade + 3; 

    // [Step 2] Mixed-type arithmetic involving int, char, and double
    // score = 100 + 68 + 1.567 = 169.567
    double final_score = score + grade + BONUS; 

    // [Step 3] Visual trap with postfix increment inside comment
    // final_score++; 

    // [Step 4] Output values with precision formatting and character conversion
    printf("%c\n", grade);         // Prints character character 'D'
    printf("%.2f", final_score);   // Prints with 2 decimal places (Rounded)

    return 0;
}