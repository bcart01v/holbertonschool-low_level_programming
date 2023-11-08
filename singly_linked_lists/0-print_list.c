#include "lists.h"

/**
 * 
 * 
 * 
 * 
*/

size_t print_list(const list_t *h) 
{
	const list_t *TempPointer = h;
	size_t counter = 0; 

	if (TempPointer == NULL) 
	{
	  printf("[0] (nil)\n");
	}

	while (TempPointer != NULL)
	{
		if (TempPointer ->str == NULL )
		{
			return (0);
		}
		else 
		{
		printf ("[%lu] %s\n", strlen(TempPointer->str),TempPointer->str);
		}
		TempPointer = TempPointer->next;
		counter++;
	}
	return (counter);
}
