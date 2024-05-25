/* Member Functions in C++ Structures */
#include <iostream>
using namespace std;

struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;

    // member function to display information about the person
    void display_info() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person p1;
    
    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // display information using member function
    cout << "\nDisplaying Information." << endl;
    p1.display_info();

    return 0;
}