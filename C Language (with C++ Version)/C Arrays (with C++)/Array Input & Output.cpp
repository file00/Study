/* Array Input/Output */
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <iostream>
using namespace std;

int main() {
    int values[5];

  cout << "Enter 5 integers: ";

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     cin >> values[i];
  }

  cout << "Displaying integers: ";

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     cout << values[i] << endl;
  }
  return 0;
}