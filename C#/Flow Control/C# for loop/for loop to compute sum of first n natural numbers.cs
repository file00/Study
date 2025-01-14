/* for loop to compute sum of first n natural numbers */

using System;

namespace Loop
{
	class ForLoop
	{
		public static void Main(string[] args)
		{
			int n = 5,sum = 0;

			for (int i=1; i<=n; i++)
			{
				// sum = sum + i;
				sum += i;
			}

			Console.WriteLine("Sum of first {0} natural numbers = {1}", n, sum);
		}
	}
}