#include "main.h"

/**
* swap_int - swaps 2 ints 
* 
*/

void swap_int (int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
