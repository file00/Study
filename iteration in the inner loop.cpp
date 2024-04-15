/* continue with Nested loop */

// using continue statement inside
// nested for loop

#include <iostream>
using namespace std;

int main() {
    int i, j, number;
    int sum = 0;
    
    // nested for loops
    // first loop
    for (i = 1; i <= 3; i++) {
        // second loop
        for (j = 1; j <= 3; j++) {
            if (j == 2) {
                continue;
            }
            cout << "i = "<< i << ", j = " << j << endl;
        }
    }
    return 0;
}

