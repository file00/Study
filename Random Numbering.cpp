/* Random Numbering */
// Since the numbers are randomly outputted from 1 to 9, different numbers come out every time the code is outputted.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int i, random;
    
    srand(time(NULL));
     for (i = 0; i < 10; i++) {
        random = rand() % 5;
        cout << random << " " ;
    }
    return 0;
}


