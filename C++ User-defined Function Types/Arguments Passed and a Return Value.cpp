/* Arguments Passed and a Return Value */
#include <iostream>
using namespace std;

// declare a function
// with int argument and int return type
bool check_prime(int n);

int main() {
    int num;
    cout << "Enter a positive integer to check: ";
    cin >> num;
    
    int is_prime = check_prime(num);

    if (is_prime == true)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}

// function to check if the number is prime
bool check_prime(int n) {
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}