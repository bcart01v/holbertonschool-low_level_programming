#include "main.h"

/**
* print_square - prints a square
* @size: passed character of size that we should print
* bjc - 2023-10-1
*/

void print_square(int size)
{
int counter;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (counter = 0; counter < size; counter++)
	{
		_putchar(35);
	}
}
}
