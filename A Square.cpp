/* Square */
#include<iostream>
#include<iomanip>

using namespace std;
#define Line cout << "==========" << endl

void printSquare(int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            cout << "*";
        } cout << endl;
    }
}

int main() {
	cout << endl;
	Line;
	printSquare(9);
	Line;
    return 0;
}
