/* A name output program (with spaces) */
#include <iostream>
#include <string>
using namespace std;

string name;

int main() {
   
    cout << "Please enter your full name :";
    getline(cin, name);
    
    const string greeting = "Hello, " + name + "!";
    const string spaces(greeting.size(), ' ');
    const string secondline = "* " + spaces + " *";
    const string firstline(secondline.size(), '*');
    
    cout << endl;
    cout << firstline << endl;
    cout << secondline << endl;
    cout << "* " << greeting << " *" << endl; 
    cout << secondline << endl;
    cout << firstline << endl;
    return 0;
}

