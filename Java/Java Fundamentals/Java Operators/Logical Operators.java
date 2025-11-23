// Logical Operators

class Main {
  public static void main(String[] args) {

    // && operator
    System.out.println((5 > 3) && (8 > 5));  
    System.out.println((5 > 3) && (8 < 5));  

    // || operator
    System.out.println((5 < 3) || (8 > 5));  
    System.out.println((5 > 3) || (8 < 5));  
    System.out.println((5 < 3) || (8 < 5));  

    // ! operator
    System.out.println(!(5 == 3));  
    System.out.println(!(5 > 3));  
  }
}