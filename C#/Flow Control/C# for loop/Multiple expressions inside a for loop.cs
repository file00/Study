/* Multiple expressions inside a for loop */

using System;

namespace Loop
{
	class ForLoop
	{
		public static void Main(string[] args)
		{
			for (int i=0, j=0; i+j<=5; i++, j++)
			{
				Console.WriteLine("i = {0} and j = {1}", i,j);
			}         
		}
	}
}