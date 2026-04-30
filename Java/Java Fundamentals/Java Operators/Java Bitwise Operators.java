// Java Bitwise Operators

public class Main {
    
    public static void main(String[] args) {
        
        // Input value 35 (Binary: 00100011)
        int input = 35;

        /* 
         * Perform bitwise complement (~).
         * Java uses 32-bit integers, so ~35 results in a negative number.
         * We apply '& 0xFF' to keep only the last 8 bits (masking).
         */
        int result = (~input) & 0xFF;

        // Display the results in Decimal
        System.out.println("Input (Decimal): " + input);
        System.out.println("Result (Decimal): " + result);
        
        // Display the results in Binary for visual verification
        // String.format is used to pad zeros for an 8-bit display
        System.out.println("35 in Binary:   " + String.format("%8s", Integer.toBinaryString(input)).replace(' ', '0'));
        System.out.println("~35 (8-bit):    " + String.format("%8s", Integer.toBinaryString(result)).replace(' ', '0'));
    }
}
