// My First C Program (Input & Output Version)

#include <stdio.h>

int main() {
    
    char greeting[50];

    // fgets safely reads a line of text from the keyboard (stdin), ensuring it does not exceed the 50-byte limit of the greeting array.
    fgets(greeting, sizeof(greeting), stdin);
    printf("%s", greeting);

    return 0;
}
