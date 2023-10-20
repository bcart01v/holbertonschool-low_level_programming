#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array - Creates an Array
 * @size: the size were using
 * @c: the char were using 
 * Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
	free (arr);
}