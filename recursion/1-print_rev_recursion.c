#include "main.h"

/**
 * _print_rev_recursion - Same as 0 but in reverse
 * @s: The string we're printing
 * Return - Not needed
 * BJC - 2023-10-13
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{		
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
