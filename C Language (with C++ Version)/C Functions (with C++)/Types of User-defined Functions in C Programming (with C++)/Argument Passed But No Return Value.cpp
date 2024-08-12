/* Argument Passed But No Return Value */
#include <iostream>
using namespace std;

void checkPrimeAndDisplay(int n);

int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  // n is passed to the function
  checkPrimeAndDisplay(n);

  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n) {
  int i, flag = 0;

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }

  if(flag == 1)
    cout << n << " is not a prime number." << endl;
  else
    cout << n << " is a prime number." << endl;
}