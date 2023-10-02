#include "main.h"

/**
* _puts - prints a string, followed by new line
* @str: string it's printing
* BJC - 2023-10-02
*/

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
		_putchar('/n');
}
