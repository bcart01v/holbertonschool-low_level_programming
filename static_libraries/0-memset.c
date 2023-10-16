#include "main.h"

/**
* *_memset - fills memory with a constant byte.
* @s: String address.
* @b: Constant byte.
* @n: Memory area pointed
* BJC - 2023-10-04
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
