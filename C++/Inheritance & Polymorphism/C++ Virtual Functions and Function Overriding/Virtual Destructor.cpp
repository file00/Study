/* Virtual Destructor */

#include <iostream>

using namespace std;

class Shape {
    public:
        Shape() = default;

        virtual double get_area() const {
            return 0.0;
        }

        virtual ~Shape() = default;
};

class Square: public Shape {
    private:
        double* length;

    public:
        Square(double len = 1.0): length(new double{len}) {
        }

        double get_area() const override {
            return *length * *length;
        }

        ~Square() {
            delete length;
             cout << "deleted length." << endl << endl;
        }
};

int main() {
    // Pointer to Square class pointing to Square object
    Square* shape1 = new Square(1.5);
    cout << "area of square: " << shape1->get_area() << endl;
    // invokes Square class destructor
    delete shape1;

    // pointer to Shape class pointing to Square object
    Shape* shape2 = new Square(2.5);
    cout << "area of square: " << shape2->get_area() << endl;
    // invokes square class destructor
    delete shape2;
    return 0;
}
