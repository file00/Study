/* A simple multiplication program (using for()) */
#include <stdio.h>

int main() {
    int i, j;
    
	for (i = 2; i < 10; i++) {
	    for (j = 1; j < 10; j ++) {
	        printf("%d * %d = %d\n", i, j, i * j);
	    }
	}
}