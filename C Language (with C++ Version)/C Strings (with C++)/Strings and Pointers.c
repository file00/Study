/* Strings and Pointers */

#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("Name : %c\n", *name);     // Output: H
  printf("Name (+ 1) : %c\n", *(name+1));   // Output: a
  printf("Name (+ 7) : %c\n", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("Name : %c\n", *namePtr);     // Output: H
  printf("Name (+ 1) : %c\n", *(namePtr+1));   // Output: a
  printf("Name (+ 7) : %c", *(namePtr+7));   // Output: o
}