/* Important Points */

#include <iostream>
using namespace std;

int main() {
    string city1 = "Paris";

    // create a reference to the variable
    string& ref_city = city1;
    
    // display the variable
    cout << "city1 = " << city1 << endl;
    cout << "ref_city = " << ref_city << endl;
    
    string city2 = "New York";
    
    // trying to modify the ref_city reference variable to refer to city2
    // but it assigns the value of city2 to the variable city1
    ref_city = city2;

    // display the variables
    cout << endl << "city1 = " << city1 << endl;
    cout << "city2 = " << city2 << endl;
    cout << "ref_city = " << ref_city << endl;

    return 0;
}