#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    enum month {
	January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
    enum month mm;
    printf("Input month : ");
    scanf("%d", &mm);
    switch (mm) {
    case January: printf("%d is January.", mm); break;
    case February: printf("%d is February.", mm); break;
    case March: printf("%d is March.", mm); break;
    case April: printf("%d is April.", mm); break;
    case May: printf("%d is May.", mm); break;
    case June: printf("%d is June.", mm); break;
    case July: printf("%d is July.", mm); break;
    case August: printf("%d is August.", mm); break;
    case September: printf("%d is September.", mm); break;
    case October: printf("%d is October.", mm); break;
    case November: printf("%d is November.", mm); break;
    case December: printf("%d is December.", mm); break;
    default: printf("Wring Input");
    } printf("\n\n");
}