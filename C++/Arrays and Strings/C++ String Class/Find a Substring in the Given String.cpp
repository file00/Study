/* Find a Substring in the Given String */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world, wonderful world!";
    cout << "String: " << str << endl;
    
    // find the first occurrence
    size_t first_occurrence = str.find("world");
    
    // find the last occurrence
    size_t last_occurrence = str.rfind("world");
    
    if (first_occurrence != string::npos) {
        cout << "First occurrence: 'world' found at position: " << first_occurrence << endl;
        cout << "Last occurrence: 'world' found at position: " << last_occurrence << endl;
    }
    else {
        cout << "'world' not found" << endl;
    }

    return 0;
}