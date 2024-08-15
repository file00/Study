/* C# Blocks with statements */
using System;

namespace Blocks
{
	class BlockExample
	{
		public static void Main(string[] args)
		{
			double temperature = 42.05;
			if (temperature > 32)
			{	// Start of block
				Console.WriteLine("Current temperature = {0}", temperature);
				Console.WriteLine("It's hot");
			}	// End of block
		}
	}
}