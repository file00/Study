// Change Value of Array elements

#include <stdio.h>

int main()
{
    int mark[] = {19, 10, 8, 17, 9};
    
    // make the value of the third element to -1
    mark[2] = -1;

    // make the value of the fifth element to 0
    mark[4] = 0;
    
    printf("%d\n", mark[0]);
    printf("%d\n", mark[1]);
    printf("%d\n", mark[2]);
    printf("%d\n", mark[3]);
    printf("%d", mark[4]);

    return 0;
}