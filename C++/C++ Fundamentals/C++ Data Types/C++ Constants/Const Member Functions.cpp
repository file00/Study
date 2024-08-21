/* Const Member Functions */

#include <iostream>
using namespace  std;

class Rectangle {
private:
    int breadth, length;

public:
    Rectangle(int length, int breadth){
        this->breadth = breadth;
        this->length = length;
    }

     // constant member function
    int get_area() const {
        return length * breadth;
    }

    // non-constant member function
    int get_perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {

    // create a const Rectangle object
    const Rectangle RECT = Rectangle(7, 6);

    // call the const member function
    cout << "Area: " << RECT.get_area() << endl;

    return 0;
}