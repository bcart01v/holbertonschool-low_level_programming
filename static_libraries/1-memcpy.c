#include "main.h"

/**
* _memcpy - Copies n bytes
* @dest: Destication
* @src: The Source
* @n: An Int
* Return: return the dest
* BJC - 2023-10-04
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int CountyWounty = 0;
	int OutdatedCounter = n;

	for (CountyWounty = 0; CountyWounty < OutdatedCounter; CountyWounty++)
	{
		dest[CountyWounty] = src[CountyWounty];
		n--;
	}
	return (dest);
}
