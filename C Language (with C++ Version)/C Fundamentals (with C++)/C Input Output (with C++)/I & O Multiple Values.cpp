// I/O Multiple Values 
#include <iostream>
#include <iomanip>   // for setprecision 
using namespace std;

int main()
{
    int a;
    float b;

    cout << "Enter integer and then a float: ";

    // Taking multiple inputs
    cin >> a >> b;

    cout << "You entered " << a << " and " << fixed << setprecision(6) << b;
    return 0;

}
