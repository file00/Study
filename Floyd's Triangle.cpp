/* Floyd's Triangle */
#include <iostream>
using namespace std;

int main() {
   int rows, i, j, number = 1;
   cout << "Enter the number of rows: " << endl;
   cin >> rows;
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         cout << number << ' ';
         ++number;
      }
      cout << "\n";
   }
   return 0;
}
