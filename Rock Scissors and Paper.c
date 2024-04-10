/* Rock Scissors and Paper */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char player_choice;
    int computer_choice;
    srand(time(0));
    computer_choice = rand() % 3;

    while(1) {
        printf( "Enter 'r'( = rock), 's'(= scissors), 'p'( = paper) and 'e'( = end game): ");
        scanf("%s", &player_choice);
    
        if (player_choice == 'e') {
            printf("End game.. \n");
            break;
        }
        
        if (player_choice == 'r') player_choice = 0;
        else if (player_choice == 's') player_choice = 1;
        else if (player_choice == 'p') player_choice = 2;
        
        computer_choice = rand() % 3;
        
        if (player_choice == computer_choice) {
            printf("Draw..\n");
        }
        else if ((player_choice + 1) % 3 == computer_choice) {
            printf("You lose!!\n");
        }
        else {
            printf("You win!!\n");
        }
    }
    return 0;
}