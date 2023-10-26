#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: The array we're passed
 * @action: the action I suppose
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter = 0;
	int length = size;
	if (array == NULL) 
	{
		/* we have nothing, we return nothing.*/
		return;
	}
	if (action == NULL)
	{
		return;
	}
	
	while (counter < length)
	{
		action(array[counter]);
		counter++;
	}
	/* size is the size of the array, action is the pointer we need to use*/
}
