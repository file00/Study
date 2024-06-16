/* Dynamic Memory Allocation in Class */
#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double* length;
    double* height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len = 1.0, double hgt = 1.0)
      : length{new double{len}}
      , height{new double{hgt}} {
    }
    
    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(const Wall& obj)
      : length{new double{*(obj.length)}}
      , height{new double{*(obj.height)}} {
    }
    
    void setLength(double len) {
        *length = len;
    }
    
    double calculateArea() {
      return *length * *height;
    }
    
    // destructor to deallocate memory
    ~Wall() {
        delete length;
        delete height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2 by copy constructor
  Wall wall2 = wall1;
  
  // change the length of wall2
  wall2.setLength(11.5);

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
