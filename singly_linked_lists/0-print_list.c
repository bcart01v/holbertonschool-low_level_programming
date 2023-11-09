#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the start of the list to be printed.
 * Return: The number of nodes on the list
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			{
			printf("[0] (nil)\n");
			}
		else
			{
			printf("[%d] %s\n", h->len, h->str);
			}
		h = h->next;
		counter++;
	}
	return (counter);
}

