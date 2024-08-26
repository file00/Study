/* continue with while loop */

// program to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation

// negative number -> loop terminate
// numbers above 50 -> skip iteration

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number = 0;

    while (number >= 0) {
        // add all positive numbers
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // continue condition
        if (number > 50) {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            number = 0;  // the value of number is made 0 again
            continue;
        }
    }

    // display the sum
    cout << "The sum is " << sum << endl;

    return 0;
}

// continue with for loop (Very Simple Version)

// program to print the value of i

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         // condition to continue
//         if (i == 3) {
//             continue;
//         }

//         cout << i << endl;
//     }

//     return 0;
// }