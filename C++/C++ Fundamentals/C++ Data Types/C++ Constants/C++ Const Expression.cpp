/* C++ Const Expression */

#include <iostream>
using namespace std;

// a constexpr function that
// returns nth fibonacci number
constexpr int fib(int n) {

    // returns n if n <= 1
    // else, recursively calls fib(n - 1) + fib(n - 2)
    return n <= 1 ? n: fib(n - 1) + fib(n - 2);   
}

int main() {

    // two constexpr variables that store
    // the return values of constexpr function
    constexpr int fibonacci_five = fib(5);
    constexpr int fibonacci_ten = fib(10);

    cout << "fib(5) : "<< fibonacci_five << endl;
    cout << "fib(10) : "<< fibonacci_ten;

    return 0;
}