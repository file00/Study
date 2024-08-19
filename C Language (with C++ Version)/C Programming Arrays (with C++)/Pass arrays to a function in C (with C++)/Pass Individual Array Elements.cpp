/* Pass Individual Array Elements */

#include <iostream>
using namespace std;

void display(int age1, int age2) {
  cout << age1 << endl;
  cout << age2 << endl;
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  display(ageArray[1], ageArray[2]); 
  return 0;
}