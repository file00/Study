/* Const Pointer to a Const */

#include <iostream>
using namespace std;

int main() {
    
    // create a const variable
    const string COUNTRY1 = "Nepal";
    
    // create a const pointer to const
    const string *const PTR = &COUNTRY1;

    cout << *PTR;
  
    return 0;
}