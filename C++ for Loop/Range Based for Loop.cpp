/*  Range Based for Loop */
#include <iostream>
using namespace std;

int main() {
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }
  
    return 0;
}