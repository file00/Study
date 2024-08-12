/* No Arguments Passed But Returns a Value */
#include <iostream>
using namespace std;

int getInteger();

int main() {

  int n, i, flag = 0;

  // no argument is passed
  n = getInteger();    

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    cout << n << " is not a prime number." << endl;
  else
    cout << n << " is a prime number." << endl;

  return 0;
}

// returns integer entered by the user
int getInteger() {
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  return n;
}