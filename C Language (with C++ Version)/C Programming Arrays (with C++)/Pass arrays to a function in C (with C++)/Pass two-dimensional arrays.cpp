/* Pass two-dimensional arrays */

#include <iostream>
using namespace std;

void displayNumbers(int num[2][2]);

int main() {
  int num[2][2];
  cout << "Enter 4 numbers: " << endl;
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      cin >> num[i][j];
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num);

  return 0;
}

void displayNumbers(int num[2][2]) {
  cout << "Displaying:" << endl;
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      cout << num[i][j] << endl;
    }
  }
}