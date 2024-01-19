/* A program that saves a string in an array and then obtains the length of that string */

#include <stdio.h>
int Length(char data[ ]) {
    int count = 0;
    while(data[count]) count++;
    return count;
}

void main() {
    int data_length;
    char data[10] = {'H', 'e', 'l', 'l', 'o', '!', 0,};
    data_length = Length(data);
    
    printf("Length = %d\n", data_length);
}
