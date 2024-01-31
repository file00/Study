#include<iostream>
#include<vector>
using namespace std;

int main() {
	int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int y : x) {
		cout << y << " ";
	}
	cout << endl;
	for (auto y : x) {
		cout << y << " ";
	}
	cout << endl;

	for (auto& y : x) {
		cout << y << " ";
	}
	cout << endl;

	for (const auto& y : x) {
		cout << y << " ";
	}
	cout << endl;
	cout << "End of integer array test" << endl;
	cout << endl;

	vector<double> v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i + 0.14159);
	}
	for (const auto& j : v) {
		cout << j << " ";
	}
	cout << endl;
	cout << "End of vector test" << endl;
}