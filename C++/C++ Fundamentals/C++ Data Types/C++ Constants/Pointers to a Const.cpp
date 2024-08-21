/* Pointers to a Const */

#include <iostream>
using namespace std;

int main() {

    // initialize a constant TOTAL_MONTHS  
    const int TOTAL_MONTHS = 12;
 
    // MONTHS_PTR is a pointer to an int const
    const int *MONTHS_PTR = &TOTAL_MONTHS;
  
    cout << "TOTAL_MONTHS: " << TOTAL_MONTHS << endl;
    cout << "*MONTHS_PTR: " << *MONTHS_PTR << endl;

    // create another int constant
    const int HALF_MONTHS = 6;

    // MONTHS_PTR now points to HALF_MONTHS
    MONTHS_PTR = &HALF_MONTHS;

    cout << endl;
  
    cout << "HALF_MONTHS: " << HALF_MONTHS << endl;
    cout << "*MONTHS_PTR: " << *MONTHS_PTR;

    return 0;
}