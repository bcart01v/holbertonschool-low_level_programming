#include "main.h"

/**
* swap_int - swaps 2 ints
* @a: first number
* @b: second number
* BJC - 2023-10-02
*/

void swap_int (int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
