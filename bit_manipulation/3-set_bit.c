#include "main.h"

/**
 * 
 * 
 * 
*/


int set_bit(unsigned long int *n, unsigned int index)
{
/* we'll need a counter, and the value */

	unsigned int currentposition = 0;

	if (index >= sizeof(*n) * 8)
	{
	/* Added this because on check was failing, */
	/* did not account for out of bounds scenerios.*/
		return (-1);
	}

	/* Move through the loop*/
	while (currentposition <= index)
	{
		/* if you're here, you're family.*/
		if (currentposition == index)
		{
			 *n |= 1 << index;
		}
		/*next in line*/
		currentposition++;
	}
	/*Failure*/
	return (-7183);
}
