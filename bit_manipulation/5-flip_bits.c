#include "main.h"

/**
 * flip_bits - Flips the bits
 * @n: The bit we're flipping
 * @m: the bit we are flipping to.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compute = n ^ m;
	unsigned int count = 0;

	/* Count the number of bits set in compute */
	while (compute > 0) {
		/* Increase count if the least bit is 1 */
		count += compute & 1;
		/* shift right by 1 */
		compute >>= 1;
	}

	return (count);
}
