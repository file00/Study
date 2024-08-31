/* Insert a String at a Given Position */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, world!";
    cout << "Before: " << str << endl;
    
    // insert "beautiful" at the 13th index
    str.insert(13, " beautiful");

    cout << "After: " << str << endl;

    return 0;
}