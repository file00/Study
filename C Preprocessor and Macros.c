/* Predefined Macros */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("Current date: %s\n",__DATE__);
    printf("Current file: %s\n",__FILE__);
    printf("Current line: %d\n",__LINE__);
    printf("Current stdc: %d\n",__STDC__);
    printf("Current time: %s\n",__TIME__);
   
   return 0;
}

// __DATE__	A string containing the current date.
// __FILE__	A string containing the file name.
// __LINE__	An integer representing the current line number.
// __STDC__	If follows ANSI standard C, then the value is a nonzero integer.
// __TIME__	A string containing the current time.