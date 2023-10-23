#include "main.h"

/**
 * *malloc_checked - This function allocates memory using malloc
 * @b: the value we are checking
 * 
 * Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
