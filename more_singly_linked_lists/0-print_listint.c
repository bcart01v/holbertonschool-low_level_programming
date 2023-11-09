#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the start of the list.
 * @n: The count of elements that we then print.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	/* If we are printing all elements, we need to loop through*/
	size_t countywounty = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countywounty++;
	}
	return (countywounty);
}
