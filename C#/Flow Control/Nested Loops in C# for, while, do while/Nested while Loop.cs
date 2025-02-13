/* Nested while Loop */

using System;

namespace Loop
{
	class NestedWhileLoop
	{
		public static void Main(string[] args)
		{
			int i=0;
			while (i<2)
			{
				int j=0;
				while (j<2)
				{
					Console.Write("({0},{1}) ", i,j);
					j++;
				}
				i++;
				Console.WriteLine();
			}
		}
	}
}