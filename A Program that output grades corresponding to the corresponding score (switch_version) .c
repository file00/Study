/* A Program that output grades corresponding to the corresponding score (switch_version) */

#include <stdio.h>

int main() {
    int score;
    char grade;
    
    printf("Input your score : " );
    scanf("%d", &score);
    
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
    
    printf("Your score is %d so your grade is %c\n", score, grade);

    return 0;
}
