// Prevent Executing Code Using Comments

public class Main {
    
    public static void main(String[] args) {
        
        System.out.println("some code");

        // Prevent the execution of the following line
        // System.out.println("error code"); 

        /* 
           The following code is also disabled 
           using a multi-line comment 
        */
        // System.out.println("another error code");

        System.out.println("some other code");
    }
}
