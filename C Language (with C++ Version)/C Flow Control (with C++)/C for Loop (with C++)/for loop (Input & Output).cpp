/* for loop */
// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <iostream>
using namespace std;

int main() {
    int num, count, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}