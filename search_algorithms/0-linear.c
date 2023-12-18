#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: The index of the value in the array if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
