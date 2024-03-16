#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Passing structs to functions */
struct student {
   char name[50];
   int age;
};

void display(struct student s);

int main() {
  struct student s1;

  printf("Enter name: ");

  // read string input from the user until \n is entered
  // \n is discarded
  scanf("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);

  display(s1); // passing struct as an argument

  return 0;
}

void display(struct student s) {
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nAge: %d", s.age);
}

/* Return struct from a function */
// For structure, use the ones in line5 to line8 as they are.

// struct student getInformation();

// int main() {
//     struct student s;
    
//     s = getInformation();
    
//     printf("\nDisplaying information\n");
//     printf("Name: %s", s.name);
//     printf("\nRoll: %d", s.age);
    
//     return 0;
// }

// struct student getInformation() {
//     struct student s1;
    
//     printf("Enter name: ");
//     scanf("%[^\n]%*c", s1.name);
    
//     printf("Enter age: ");
//     scanf("%d", &s1.age);

//     return s1;
// }

// /Return structures from a function/Partial results are the same as /Passing structures to functions/ above.
