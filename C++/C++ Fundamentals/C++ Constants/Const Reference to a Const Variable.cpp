/* Const Reference to a Const Variable */

#include <iostream>
using namespace std;

int main() {

    // initialize a constant PI  
    const double PI = 3.14;
  
    // create a read-only reference to PI
    const double &PI_REF = PI;
  
    cout << "PI: " << PI;
    cout << "\nPI_REF: " << PI_REF;
  
    return 0;
}