#include "main.h"

/**
 * set_bit - sets a bit from requested index
 * @n: pointer to uli, the number which will be set.
 * @index: the specific bit we will set.
 * Return: -1 if failure, otherwise 1
*/


int set_bit(unsigned long int *n, unsigned int index)
{
/* we'll need a counter, and the value */

	if (index >= sizeof(*n) * 8)
	{
	/* Added this because on check was failing, */
	/* did not account for out of bounds scenerios.*/
		return (-1);
	}
	/* it turns out, I don't need a loop when I have an */
	/* index.. that means I could simplify 2-get_bit probably */

	/* Set the bit at the requested index */
	/* 1UL << index moves 1 to the left by value of index */
	/* then OR it with *n to set the bit at said index. */

	*n |= (1UL << index);

	/*if it worked, we return 1 as requested */
	return (1);
}
