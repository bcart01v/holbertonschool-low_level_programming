#include "main.h"

/**
* print_diagonal - were printing a diagonal line
* @n: the unput were getting to print to
* bjc - 2023-10-01
*/

void print_diagonal(int n)
{
	int i, j = n;
	if (n > 0)
	{
		while (n > 0)
	{
		n--;
	for (i = n + 1; (i < j) ; i++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
	}
