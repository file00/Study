/* Erase N Characters From the Given Position */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, beautiful world!";
    cout << "Before: " << str << endl;
    
    // erase five characters starting from the seventh index
    str.erase(7, 5);

    cout << "After: " << str << endl;

    return 0;
}