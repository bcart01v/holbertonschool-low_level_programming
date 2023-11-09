#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: A pointer to the first node of the list.
 * Return: The number of nodes in the list starting from @head.
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
