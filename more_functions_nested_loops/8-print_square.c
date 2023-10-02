#include "main.h"

/**
* print_square - prints a square
* @size: passed character of size that we should print
* bjc - 2023-10-1
*/

void print_square(int size)
{
	int i, j = size;

	if (size > 0)
	{
	while (size > 0)
	{
		for (i = 0; i < j ; i++)
	{
		_putchar('#');
	}
		_putchar('\n');
		size--;
	}
	}
	else
	_putchar('\n');
}
