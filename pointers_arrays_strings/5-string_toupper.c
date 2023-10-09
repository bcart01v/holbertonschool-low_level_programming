#include "main.h"

/**
 * string_toupper - function that changes all lowercase of string to uppercase
 * @n: string input
 * Return: dest
 * BJC - 2023-10-08
 */

char *string_toupper(char *n)
{
	int count;

	count = 0;
	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z')
			n[count] = n[count] - 32;
		count++;
	}
	return (n);
}
