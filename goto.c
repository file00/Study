/*goto*/

#include <stdio.h>

int main() {
    int x, y;
    for(x = 5; x <= 6 ; x ++) { // x is repeated twice from 5 to 6.
        for (y = 0; y <= 2; y++) { // y is repeated three times from 0 to 2.
            if (x == 3 && y == 1) goto exit_pos;
            printf("x(%d) - y(%d)\n", x, y);
        }
    }
    exit_pos:
    printf("End\n", x, y);
    return 0;
}


/*The geto is performed when the x value is 5 and the y value is 1.
Goto moves to the label he designates, regardless of where he is.
Therefore, if you perform a geto when the x value is 5 and the y value is 1, you will be moved to the exit_pos label, and the exit_pos position is the position where all the repetitions have ended, so it is possible only when the output is x = 5 and y = 0.

-> If you are a beginner programmer, it is recommended not to use goto if possible. This is because it can destroy the structured grammar of language C by misusing it, and the reason why I posted this was to purely study that there is also such grammar.*/