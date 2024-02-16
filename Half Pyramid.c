/* Half Pyramid */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i < rows; i++) {
        for (j = 1; j < i; j++) {
            // printf("* "); // Use if you want to print out in the shape of '*'
            // printf("%d", rows); //In this case, only the numbers entered have a shape and are output.
            printf("%d", j); 
        }
        printf("\n");
    }
    return 0;
}
