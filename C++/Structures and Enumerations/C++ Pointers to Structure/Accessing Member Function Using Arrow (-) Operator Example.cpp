/* Accessing Member Function Using Arrow (->) Operator Example */
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
    
    void print_distance() {
    	cout << "Displaying Information." << endl;
    	cout << "Distance = " << feet << " feet " << inch << " inches";
    }
};

int main() {
    Distance d;
    Distance* ptr = &d;
    
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;
    
    ptr->print_distance();

    return 0;
}