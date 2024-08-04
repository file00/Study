/* nested if example program */
/* Increase date, month, and year using nested if() */

#include <iostream>
using namespace std;

int main() {
    int year = 2024, month = 1, day = 31;
	day++;
	
	if (day > 31) {
		month++;
		day = 1;
		if (month > 12) {
			year++;
			month = 1;
		}
	}
		cout << "Date : " << year << "/" << month << "/" << day << endl;

    return 0;
}