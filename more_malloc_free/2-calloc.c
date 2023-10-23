#include "main.h"
/**
 * _calloc-fuction that allocate memory for an array using malloc
 * @nmemb:number of members
 * @size:sizeof memory
 * Return:NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	output = calloc(nmemb, size);

	if (output == NULL)
	{
		return (NULL);
	}
	else
		return (output);
}
