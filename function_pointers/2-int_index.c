#include <stdalign.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: an aray
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: The result, or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int length = size;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	/**
	 * I don't think it matters if size is null?
	 * If array is null, size would be null, and
	 * we wouldn't be at this line at all.
	*/
	if (size <= 0)
	{
		return (-1);
	}
	/**
	 * Size is number of elements in array
	 * cmp is the pointer to function to be used to compare values
	 * int-index returns the index of the first element
	 * for which the cmp function doesn't return 0
	 * if no element matches, return -1
	 * if size <=0 return -1
	*/
	for (length = 0; length < size; length++)
	{
		if (cmp(array[length]) == 1)
			return (length);
	}
	return (-1);
}
