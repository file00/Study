/* No Arguments Passed but a Return Value */
#include <iostream>
using namespace std;

// declare a function with no arguments
// and return type string
string get_username();

int main() {

    // call prime and assign return value to is_prime
    string user_name = get_username();

    cout << "Hello, " << user_name;
 }  

string get_username() {
    string name;
    cout << "Enter your user name\n";
    cin >> name;

    return name;
}