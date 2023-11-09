#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at index passed
 * @head: Pointer to the node list.
 * @index: the index we want to print.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* we're just returning the index of a list*/
	unsigned int compare = 0;
	while (head!= NULL)
	{
		compare++;
		if (compare == index)
		{
			/* so here we have what we need */
			/* now it needs to return the node */

			return (head);

		}
		head = head->next;
	}
	return NULL;
}
