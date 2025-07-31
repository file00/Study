// Why enums are used? 

#include <stdio.h>

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() 
{
    card = club;
	printf("Size of enum variable = %ld bytes", sizeof(card));	
	return 0;
}

// Enums make code more readable by replacing magic numbers with meaningful names.
