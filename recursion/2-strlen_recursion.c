#include "main.h"

/**
 * _strlen_recursion- Returns the length of string
 * @s: The string we're counting
 * 
 * BJC - 2023-10-13
*/
int count;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	count++;
	_strlen_recursion(s + 1);
	}

return (count);
}
