/* Argument Passed and Returns a Value */
#include <iostream>
using namespace std;

int checkPrimeNumber(int n);

int main() {

  int n, flag;

  cout << "Enter a positive integer: ";
  cin >> n;

  // n is passed to the checkPrimeNumber() function
  // the returned value is assigned to the flag variable
  flag = checkPrimeNumber(n);

  if(flag == 1)
    cout << n << " is not a prime number" << endl;
  else
    cout << n << " is a prime number" << endl;

  return 0;
}

// int is returned from the function
int checkPrimeNumber(int n) {

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    return 1;

  int i;

  for(i=2; i <= n/2; ++i) {
    if(n%i == 0)
      return 1;
  }

  return 0;
}