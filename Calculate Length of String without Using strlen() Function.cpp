/* Calculate Length of String without Using strlen() Function */
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char s[40];
    int i;

    cout << "Input: ";
    fgets(s, 40, stdin);

    for (i = 0; s[i] != '\0'; ++i);
    cout << "Length of the string: " << i << endl;
    
    return 0;
}
