/* while loop to compute sum of first 5 natural numbers */

using System;

namespace Loop
{
	class WhileLoop
	{
		public static void Main(string[] args)
		{
			int i=1, sum=0;

			while (i<=5)
			{
				sum += i;
				i++;
			}
			Console.WriteLine("Sum = {0}", sum);
		}
	}
}