#include "main.h"

/**
 * print_binary - Prints the binary of the passed n
 * @n: The number to be converted and printed.
 * Return: only 1 return, if n is 0.
*/

void print_binary(unsigned long int n)
{
	/* I don't even know where to start with this one...*/
	/* can't use arrays, malloc or % / operators. WHAT CAN I USE?!*/
	/* We need the size of int passed*/
	unsigned long int getsize = n;
	/* this creates "mask" that has the MSB */
	/* The 'Sizeof * 8' is getting the number of bits in n */
	/* taking away 1 is needed, because bits have a 0 index */
	unsigned long int mask = 1ul << (sizeof(getsize) * 8 - 1);

	if (n == 0)
	{
		/* if it's 0, we print 0. Don't make it complicated.*/
		printf("0");
		return;
	}
	/* Find the first set bit from the start */
	/* It stops when mask & n is not zero */
	while ((mask & n) == 0)
	{
		mask >>= 1;
	}
	/* Now we move through and print the bits */
	while (mask)
	{
		if ((n & mask) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		mask >>= 1;
	}

}
