/* String interpolation */

using System;  
namespace CsharpString {  
  class Test {
    public static void Main(string [] args) {

      // create string
      string name = "Programiz";

      // string interpolation
      string message = $"Welcome to {name}";
      Console.WriteLine(message);

      Console.ReadLine();
    }
  } 
}