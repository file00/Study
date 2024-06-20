/* C++ goto Statement */
// This program calculates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and 
// calculates the average number entered before it.

# include <iostream>
using namespace std;

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0)
        {
           // Control of the program move to jump:
            goto jump;
        } 
        sum += num;
    }
    
jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}

// Reason to Avoid goto Statement
// The goto statement gives the power to jump to any part of a program but, makes the logic of the program complex and tangled.
// In modern programming, the goto statement is considered a harmful construct and a bad programming practice.
// The goto statement can be replaced in most of C++ program with the use of break and continue statements.
