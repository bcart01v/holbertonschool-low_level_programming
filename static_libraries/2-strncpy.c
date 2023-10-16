#include "main.h"

/**
 * _strncpy - function that copies a string
 * @n: function parameter
 * @dest: function parameter
 * @src: funtion parameter
 * Return: dest
 * BJC - 2023-10-08
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}

	for (; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
