/* A Right Triangle */

#include <iostream>
using namespace std;

int main() {
    int i, j, num;
	cin >> num;
	int count = 1;
	
	for (i = 0; i < num; i++) {
	    for (j = 0; j <= i; j++) {
	        cout << count << " ";
	        count++;
	    }
	    cout << endl;
	}
	return 0;
}
