#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the start of the list to be printed.
 * 
 * Return: The number of nodes on the list
*/

size_t print_list(const list_t *h)
{
	const list_t *TempPointer = h;
	size_t counter = 0;

	if (TempPointer == NULL)
	{
	return (0);
	}

	while (TempPointer != NULL)
	{
		if (TempPointer->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%lu] %s\n", strlen(TempPointer->str), TempPointer->str);
		}
		TempPointer = TempPointer->next;
		counter++;
	}
	return (counter);
}
