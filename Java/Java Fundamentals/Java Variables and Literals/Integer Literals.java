/* Integer Literals */
class Main {
    public static void main(String[] args) {

        // binary
        int binaryNumber = 0b10010;
        // octal
        int octalNumber = 027;
        // decimal
        int decNumber = 34;
        // hexadecimal
        int hexNumber = 0x2F; // 0x represents hexadecimal
        // binary
        int binNumber = 0b10010; // 0b represents binary

        double myDouble = 3.4;
        float myFloat = 3.4F;

        // 3.445*10^2
        double myDoubleScientific = 3.445e2;

        System.out.println(binaryNumber);
        System.out.println(octalNumber);
        System.out.println(decNumber);
        System.out.println(hexNumber);
        System.out.println(binNumber);

        System.out.println(myDouble);  // prints 3.4
        System.out.println(myFloat);    // prints 3.4
        System.out.println(myDoubleScientific);   // prints 344.5
    }
}
