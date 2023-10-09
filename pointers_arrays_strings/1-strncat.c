#include "main.h"

/**
* _strncat - It concatenates two strings
* @src: The source
* @dest: The desination
* @n: The counter we're using
* BJC - 2023-10-08
*/

char *_strncat(char *dest, char *src, int n)
{
	char *destpoint = dest;
	int counter = 0;

	while (*destpoint != '\0')
	{
		destpoint++;
	}
	while (counter < n && *src != '\0')
	{
		*destpoint = *src;
		destpoint++;
		src++;
		counter++;
	}
	*destpoint = '\0';
	return (dest);
}
