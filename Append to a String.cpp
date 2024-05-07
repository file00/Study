/* Append to a String */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world,";
    cout << "Before: " << str << endl;

    //append the string
    str.append(" Have a good day!");

    cout << "After: " << str << endl;

    return 0;
}