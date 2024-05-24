/* C++ new and delete Expression for Objects */
#include <iostream>
using namespace std;

class Student {
    private:
    int age;
    
    public:
    
    // constructor initializes age to 12
    Student() : age(12) {}
    
    void get_age() {
      cout << "Age = " << age << endl;
    }
};

int main() {
    // dynamically declare student object
    Student* ptr = new Student();
    
    // call get_age() function
    ptr->get_age();
    
    // ptr memory is released
    delete ptr;
    
    return 0;
}