#include "main.h"

/**
* print_diagonal - were printing a diagonal line
* @n - the unput were getting to print to
* bjc - 2023-10-01
*/

void print_diagonal(int n)
{
	int x, y;

	for ( x = 0; x < n; x++)
	{
		for ( y = 0; y < n; y++)
	{
		if (x == y && n-- > 0)
	{
		_putchar(' ');
		_putchar(92);
	}
	}
	}
	_putchar('\n');
}
