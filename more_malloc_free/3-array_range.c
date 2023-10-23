#include "main.h"
/**
 * array_range-function that creates an array of integers.
 * @min:the min of array
 * @max:the max of an array
 * Return:NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *ary;

	if (min > max)
	{
		return (NULL);
	}

	ary = (int *)malloc((max - min + 1) * sizeof(int));
	if (ary == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		ary[i] = min + i;
	}
	return (ary);
}
