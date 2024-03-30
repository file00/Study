/* Random numbering */
// Since the numbers are randomly outputted from 1 to 9, different numbers come out every time the code is outputted.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, random;
    
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        random = rand() % 5;
        printf("%d ", random);
    }
    return 0;
}


