/* Basic Function Example */
#include <iostream>
using namespace std;

int a = 100;

void func() {
    int a = 200;
    cout << "in func a : " << a << endl;    
}

int main() {
    func();
    cout << "in main a : " << a << endl;
    return 0;
}