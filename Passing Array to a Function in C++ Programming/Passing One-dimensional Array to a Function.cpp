/* Passing One-dimensional Array to a Function */
// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// declare function to display marks
// take a 1d array as parameter
void display(int m[]) {
    cout << "Displaying marks: " << endl;

    // display array elements    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {
    // declare and initialize an array
    int marks[ARRAY_SIZE] = {88, 76, 90, 61, 69};
    
    // call display function
    // pass array as argument
    display(marks);

    return 0;
}
