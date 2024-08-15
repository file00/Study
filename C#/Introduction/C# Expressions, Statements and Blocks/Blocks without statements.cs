/* Blocks without statements */
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
				// No statements
			}	// End of block
		}
	}
}