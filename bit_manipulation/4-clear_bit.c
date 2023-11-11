#include "main.h"

/**
 * clear_bit - Sets the bit value to 0 at given index
 * @n: A pointer to the bit that needs clearing
 * @index: the index of the bit to clear.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Don't need a loop if we know the index. */
	if (index >= sizeof(*n) * 8)
	{
	/* Added this because on check was failing, */
	/* did not account for out of bounds scenerios.*/
		return (-1);
	}
	/* The following notes are for my reference to help my understanding*/
	/*1UL is an unsigned long int with a value of 1*/
	/* << is shifting the binary representation of 1UL */
	/* to the left by the number passed by index. */
	/* https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/# */
	
	*n &= ~(1UL << index);

	return (1);
}
