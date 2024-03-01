/* nested if example program */
/* Increase date, month, and year using nested if() */

#include <stdio.h>

void main() {
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
		printf("Date : %d/%d/%d\n\a", year, month, day);
}
