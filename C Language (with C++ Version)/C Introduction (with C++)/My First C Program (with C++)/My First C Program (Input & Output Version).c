// [Title] My First C Program (Input & Output Version)
#include <stdio.h>

int main() {
    
    // Create a storage space (array) that can hold up to 50 characters.
    char greeting[50];

    // Guide the user to type something, so the screen doesn't just stay blank.
    printf("Type your greeting and press Enter: ");

    /*
     * [How fgets works]
     * 1. greeting       -> Where to save the text.
     * 2. sizeof(greeting) -> Maximum limit (50 bytes) to prevent program crashes.
     * 3. stdin          -> Tells C to get input from the keyboard.
     * 
     * *Note: fgets also saves the 'Enter' key (\n) you pressed!
     */
    
    fgets(greeting, sizeof(greeting), stdin);
    
    // %s is used to print a string (text).
    printf("Your greeting: %s", greeting);

    return 0;
}
