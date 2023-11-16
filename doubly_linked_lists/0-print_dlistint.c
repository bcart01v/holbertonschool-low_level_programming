#include "lists.h"

/**
 * print_dlistint - prints a list of 
 * @h: Pointer to the list we are going to print.
 * 
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *hold = NULL;

	hold = h;
	while (h != NULL)
	{
		if(h->prev != NULL)
		{
			while(hold->prev != NULL)
			hold = hold->prev;
		}
		printf("[%d]\n", hold->n);
		hold = hold -> next;
		counter++;
	}
	return (counter);
}
