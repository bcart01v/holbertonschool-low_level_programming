#include "main.h"

/**
 * get_bit - Returns a bit from requested index
 * @n: the value we're converting
 * @index: The index of where said value is
 * Return: 1 or 0 if correct, my student ID if failure.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	/* we'll need a counter, and the value */

	unsigned int currentposition = 0;
	unsigned int long currentvalue = 0;

	if (index >= sizeof(n) * 8)
	{
	/* Added this because on check was failing, */
	/* did not account for out of bounds scenerios.*/
		return (-1);
	}

	/* Move through the loop*/
	while (currentposition <= index)
	{
		/* set our current value */
		currentvalue = n & (1ul << currentposition);

		/* if you're here, you're family.*/
		if (currentposition == index)
		{
			/*if it's not 0, it's gotta be 1*/
			if (currentvalue != 0)
			{
				return (1);
			}
			else
			{
			/* It's a 0, obviously.*/
				return (0);
			}
		}
		/*next in line*/
		currentposition++;
	}
	/*Failure*/
	return (-7183);
}

