/* designFlags */

#include <iostream>
using namespace std;

enum designFlags {
    ITALICS = 1,
    BOLD = 2,
    UNDERLINE = 4
};

int main() {
    int myDesign = BOLD | UNDERLINE; 

        //    00000010
        //  | 00000100
        //  ___________
        //    00000110

    cout << myDesign;

    return 0;
}