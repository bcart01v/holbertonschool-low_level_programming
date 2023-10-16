#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints string + line
 * @s: The string I'm printing I'm guessing
 * Return: 0 on go
 * BJC - 2023-10-13
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		putchar('\n');
	}
}
