/* A Pyramid */
#include <iostream>
using namespace std;
int main()
{
    int Size = 11, i, j, middle = Size / 2;
    
    for(i = 0; i <= middle + 1; i++) {
        for(j = 0; j < Size; j++) {
            if (j > middle - i && j < middle + i) {
                cout << "*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


