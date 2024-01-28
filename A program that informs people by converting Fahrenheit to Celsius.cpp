/* A program that informs people by converting Fahrenheit to Celsius */
#include <iostream>
using namespace std;

int main() {
	int F;
	for (F = 0; F < 201; F = F + 20) {
		cout << "Fahrenheit(" << F << "(℉))  = " << "Celsius(" << (int)((F - 32) / 1.8) << "(℃))" << endl;
	}
	return 0;
}


