// ASCII Code (Version.C++)
#include <iostream>
using namespace std;

int main() {
    
    char chr;
    
    cout << "Enter a character: ";
    cin >> chr;

    cout << "You entered " << chr << "." << endl;
    cout << "ASCII value is " << static_cast<int>(chr) << ".";
    
    return 0;
}
