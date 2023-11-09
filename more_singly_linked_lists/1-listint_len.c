#include "lists.h"

/**
 * listint_len - Prints the number of elements in a list.
 * @h: pointer to the start of the list.
 * Return: the number of the list passed to us.
*/

size_t listint_len(const listint_t *h)
{
	size_t countywounty = 0;

	while (h != NULL)
	{
		countywounty++;
		h = h->next;
	}
	return (countywounty);
}
