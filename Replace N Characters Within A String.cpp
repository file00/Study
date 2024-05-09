/* Replace N Characters Within A String */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;
    
    // replace two characters with "Earth"
    // starting from the seventh index
    str.replace(6, 2, "Earth");

    cout << "After: " << str << endl;

    return 0;
}