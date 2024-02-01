/* Two Triangles */
#include <iostream>
#include <iomanip>

using namespace std;

#define Line cout << "------------------" << endl

void TwoTriangles(int height) {
	for (int i = 0; i < height; i++) {
		for (int j = height; j > i; j--) {
			cout << "*";
		}
		cout << " ";
		for (int j = -1; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
    TwoTriangles(7);
	Line;

    return 0;
}