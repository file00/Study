/* C# compare two strings */

using System;  
namespace CsharpString {  
  class Test {
    public static void Main(string [] args) {

      // create string
      string str1 = "C# Programming";
      string str2 = "C# Programming";
      string str3 = "Programiz";
      
      // compare str1 and str2
      Boolean result1 = str1.Equals(str2);
      Console.WriteLine("string str1 and str2 are equal: " + result1);

      //compare str1 and str3
      Boolean result2 = str1.Equals(str3);
      Console.WriteLine("string str1 and str3 are equal: " + result2);     

      Console.ReadLine();
    }
  } 
}