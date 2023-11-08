#include "lists.h"

/**
 * 
 * 
 * 
 * 
*/

size_t list_len(const list_t *h)
{
	const list_t *TempPointer = h;
	size_t counter = 0; 

	if (TempPointer == NULL) 
	{
	return (0);
	}

	while (TempPointer != NULL)
	{
		TempPointer = TempPointer->next;
		counter++;
	}
	return (counter);
}