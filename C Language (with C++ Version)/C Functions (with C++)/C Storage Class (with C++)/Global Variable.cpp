/* Global Variable */
#include <iostream>
using namespace std;

void display();

int n = 5;  // global variable

int main() {
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    cout << "n = " << n << endl; 
}