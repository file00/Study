/* Calculate Length of String without Using strlen() Function */
#include <iostream>
using namespace std;

int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    cout << "Length of the string: " << i << endl;
    return 0;
}