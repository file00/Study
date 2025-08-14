// Constants 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14;

    cout << fixed << setprecision(6) << PI << endl; // 3.140000
    cout << fixed << setprecision(2) << PI;         // 3.14

    return 0;

}
