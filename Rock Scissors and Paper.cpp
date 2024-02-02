/* Rock Scissors and Paper */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char player_choice;
    int computer_choice;
    srand(time(0));
    computer_choice = rand() % 3;

    while(true) {
        cout << "Enter 'r'( = rock), 's'(= scissors), 'p'( = paper) and 'e'( = end game): ";
        cin >> player_choice;
        
        if (player_choice == 'e') {
            cout << "End game.. " << endl;
            break;
        }
        
        if (player_choice == 'r') player_choice = 0;
        else if (player_choice == 's') player_choice = 1;
        else if (player_choice == 'p') player_choice = 2;
        
        computer_choice = rand() % 3;
        
        if (player_choice == computer_choice) {
            cout << "Draw.." << endl;
        }
        else if ((player_choice + 1) % 3 == computer_choice) {
            cout << "You lose!!" << endl;
        }
        else {
            cout << "You win!!" << endl;
        }
    }
    return 0;
}