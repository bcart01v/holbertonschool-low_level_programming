#include "main.h"

/**
* strcat
* @dest: The destination
* @src: The source 
* Return: The destination!
* BJC - 2023-10-08
*/

char *_strcat(char *dest, char *src)
{
	char *destpoint = dest;

	while (*destpoint != '\0')
	{
	destpoint++;
	}
	while (*src !='\0')
	{
		*destpoint = *src;
		destpoint++;
		src++;
	}
	*destpoint = '\0';
	return dest;
}
