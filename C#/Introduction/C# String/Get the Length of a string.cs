/* Get the Length of a string */
using System;  
namespace CsharpString {  
  class Test {
    public static void Main(string [] args) {

      // create string
      string str = "C# Programming";
      Console.WriteLine("string: " + str);
      
      // get length of str
      int length = str.Length;     
      Console.WriteLine("Length: "+ length);

      Console.ReadLine();
    }
  } 
}