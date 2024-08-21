/* C++ const */

#include <iostream>
using namespace std;

int main() {
    
    // initialize a const PI
    const double PI = 3.14;
    
    int radius = 4;

    // use the const in a calculation
    double area = PI * radius * radius;
    
    cout << "Area of circle with radius " << radius << " is: " << area;

    return 0;
}