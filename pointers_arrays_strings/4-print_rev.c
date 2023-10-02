#include "main.h"

/**
* print_rev - prints reverse order.
* @s: string we are reversing
* BJC - 2023-10-02
*/

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
