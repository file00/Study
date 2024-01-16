/* A program that makes a particular bit of a variable 0 */
#include <stdio.h>

unsigned char ResetBit(unsigned char n1, unsigned char n2){
    if(n2 < 8) n1 = n1 & ~ (0x01 << n2); 
    return n1;
}

int main() {
    unsigned char n3 = 0x7F;
    printf("%X->", n3);
    n3 = ResetBit(n3, 3);
    printf("%X\n", n3);
    return 0;
}
