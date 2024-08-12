/* No Argument Passed and No Return Value */
#include <iostream>
using namespace std;

void checkPrimeNumber();

int main() {
  checkPrimeNumber();    // argument is not passed
  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeNumber() {
  int n, i, flag = 0;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if( n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    cout << n << " is not a prime number." << endl;
  else
    cout << n << " is a prime number." << endl;
}