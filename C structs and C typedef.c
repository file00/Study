#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* C structs */
// struct Person {
//     char name[50];
//     int citNo;
//     float salary;
// } person1;

// int main() {
//     strcpy(person1.name, "George Orwell");
//     person1.citNo = 1984;
//     person1.salary = 2500;
    
//     printf("Name: %s\n", person1.name);
//     printf("Citizenship No.: %d\n", person1.citNo);
//     printf("Salary: %.2f\n", person1.salary);

//     return 0;
// }

/* C typedef */
typedef struct Person {
    char name[50];
    int citNo;
    float salary;
} person; 

int main() {
    person p1;
    
    strcpy(p1.name, "George Orwell");
    p1.citNo = 1984;
    p1.salary = 2500;
    
    printf("Name: %s\n", p1.name);
    printf("Citizenship No.: %d\n", p1.citNo);
    printf("Salary: %.2f\n", p1.salary);

    return 0;
}

// C structs or Ctypedef results are the same, so I deliberately upload both because I think there is such grammar and I can choose and use it according to the situation.
