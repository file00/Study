/* C++ Character I/O */
#include <iostream>
using namespace std;

int main() {
    char chr;
    
    cout << "Enter a character: " << chr;
    cin >> &chr;     
    cout << "You entered " << chr << "." << endl;  

    return 0;
}