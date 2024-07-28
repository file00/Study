/* ASCII Value */
#include <iostream>
using namespace std;
int main() {
    char chr;
    
    cout << "Enter a character: ";
    cin >> chr;
    
    // When %c is used, a character is displayed
    cout << "You entered " << chr << "." << endl;  

    // When %d is used, ASCII value is displayed
    cout << "ASCII value is " << int(chr) << "." << endl;  

    return 0;
}