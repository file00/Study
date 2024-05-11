/* Changing Value Pointed by Pointers */
#include <iostream>
using namespace std;
int main() {
    int var = 5;

    // store address of var
    int* point_var = &var;

    // print var
    cout << "var = " << var << endl;

    // print *point_var
    cout << "*point_var = " << *point_var << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;

    // change value of var to 7
    var = 7;

    // print var
    cout << "var = " << var << endl;

    // print *point_var
    cout << "*point_var = " << *point_var << endl
         << endl;

    cout << "Changing value of *point_var to 16:" << endl;

    // change value of var to 16
    *point_var = 16;

    // print var
    cout << "var = " << var << endl;

    // print *point_var
    cout << "*point_var = " << *point_var << endl;
    return 0;
}