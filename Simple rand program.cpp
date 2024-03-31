/* A program that outputs six numbers at random */

#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 45
using namespace std;

int main() {
    int i;
    srand( (unsigned)time( NULL ) );
    for( i = 0; i < 6; i++ ) {
        cout << 1+(rand()%MAX) << " ";
    }
    return 0;
}

