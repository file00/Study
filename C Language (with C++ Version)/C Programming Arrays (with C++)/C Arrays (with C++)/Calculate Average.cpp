/* Calculate Average */

// Program to find the average of n numbers using arrays

#include <iostream>
using namespace std;

int main() {
    int marks[10], i, n, sum = 0;
    double average;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    for (i = 0; i < n; ++i) {
        cout << "Enter number" << i+1 << ": ";
        cin >> marks[i];
        
        // adding integers entered by the user to the sum variable
        sum += marks[i];
    }
    
    // explicitly convert sum to double
    // then calculate average
    average = (double) sum / n;
    
    cout << "Average" << " = " << average << endl;
    return 0;
}