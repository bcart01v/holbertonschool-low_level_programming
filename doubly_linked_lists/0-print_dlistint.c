#include "lists.h"

/**
 * print_dlistint - prints a list of 
 * @h: Pointer to the list we are going to print.
 * Return: The count of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
