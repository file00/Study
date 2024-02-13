/* 2 Programs to relate two integers using =, > or < symbol */

// 1st type ('C if ..else version')

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2) {
        printf("Result: %d = %d",num1,num2);
    }

    else if (num1 > num2) {
        printf("Result: %d > %d", num1, num2);
    }

    else {
        printf("Result: %d < %d",num1, num2);
    }

    return 0;
}*/


// 2nd type ('C Nested if ..else version')

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2) {
      if (num1 == num2) {
        printf("Result: %d = %d",num1,num2);
      }
      else {
        printf("Result: %d > %d", num1, num2);
      }
    }
    else {
        printf("Result: %d < %d",num1, num2);
    }

    return 0;
}*/

// Only the way it was made is slightly different, and the result is the same in the end.
// If you want to see the results, it is recommended to clear the annotations one type at a time before checking.