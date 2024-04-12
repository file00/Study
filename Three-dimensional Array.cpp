/* Three-dimensional Array */

// C Program to store and print 12 values entered by the user

#include <iostream>
using namespace std;

int main() {
    int test[2][3][2];
    int i, j, k;
    
    cout << "Enter 12 Values: " << endl;
    
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for (k = 0; k < 2; ++k) {
                cin >> test[i][j][k];
            }
        }
    }
    // Printing values with the proper Index
    
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for (k = 0; k < 2; ++k) {
                cout << "test" << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << " = " << test[i][j][k] << endl;
            }
        }
    }    

    return 0;
}