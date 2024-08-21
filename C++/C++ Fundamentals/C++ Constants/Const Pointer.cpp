/* Const Pointer */

#include <iostream>
using namespace std;

int main() {
    
    string country1 = "Nepal";
    string country2 = "USA";
  
    cout << "Initially, country1: " << country1 << endl;
  
    // PTR1 is a const pointer to country1
    string *const PTR1 = &country1;
  
    // change the value of country1 using PTR1
    *PTR1 = country2;
  
    cout << "Finally, country1: " << country1;
  
    return 0;
}