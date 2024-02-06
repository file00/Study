/* Create a Password */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string WARNINGS[] ={
"Length must be at least 6",
"You must have at least one number,"
"You must have at least one lowercase English letter,"
"You must have at least one English capital letter,"
"You must have at least one special character."
};

int main(){
	string password;

	int i, j, Digit, Lower, Upper, Special;
	int a;
	int specialList[12] = { '!','@','#','$','%','^','&','*','(',')','-','+' };

	Digit = 0;
	Lower = 0;
	Upper = 0;
	Special = 0;

	while (1){
		cout << "password : ";
		cin >> password;
		if (password.length() >= 1 && password.length() <= 20)
			break;
		else
			cout << "Try again!!" << endl;
	}

	a = password.length();
	for (i = 0; i < a; i++)	{
		if (48 <= password[i] && password[i] <= 57) //Digit check
			Digit = 1;
		else if (97 <= password[i] && password[i] <= 122) //Lower_case check
			Lower = 1;
		else if (65 <= password[i] && password[i] <= 90) //Upper_case check
			Upper = 1;
		else{ //Special_characters check
			for (j = 0; j < 12; j++){
				if (password[i] == specialList[j]){
					Special = 1;
					break;
				}
			}
		}
	}
	if (a < 6)
		cout << WARNINGS[0] << endl;
	if (Digit == 0)
		cout << WARNINGS[1] << endl;
	if (Lower == 0)
		cout << WARNINGS[2] << endl;
	if (Upper == 0)
		cout << WARNINGS[3] << endl;
	if (Special == 0)
		cout << WARNINGS[4] << endl;
	if (a >= 6 && Digit == 1 && Lower == 1 && Upper == 1 && Special == 1)
		cout << "Good password!!" << endl;
	return 0;
}