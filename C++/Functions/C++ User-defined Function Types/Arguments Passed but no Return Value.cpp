/* Arguments Passed but no Return Value */
#include <iostream>
using namespace std;

void say_hello(string name);

int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;
    
    // pass argument num function prime()
    say_hello(name);
    
}

void say_hello(string name) {
    cout << "Hello " << name ; 
}