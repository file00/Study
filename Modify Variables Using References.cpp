/* Modify Variables Using References */
#include <iostream>
using namespace std;

int main() {
    string city = "Paris";

    // create a reference to the variable
    string& ref_city = city;
    
    // display the variable
    cout << "Variable Value = " << city << endl;
    cout << "Reference Value = " << ref_city << endl;

    // modify the variable using reference
    ref_city = "New York";

    // display the variable
    cout << endl << "After Modification: " << endl;
    cout  << "Variable Value = " << city << endl;
    cout << "Reference Value = " << ref_city << endl;

    return 0;
}