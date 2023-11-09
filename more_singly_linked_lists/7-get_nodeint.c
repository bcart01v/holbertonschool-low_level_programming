#include "lists.h"

/**
 * get_nodeint_at_index - Takes the node at a specific index in a linked list
 * @head: A pointer to the start of said linked list
 * @index: the index of the node to be retrieved.
 * Return: The node at the requested index, or null is whatever. 
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* we're just returning the index of a list*/
	unsigned int compare = 0;

	while (head != NULL)
	{
		if (compare == index)
		{
			/* so here we have what we need */
			/* now it needs to return the node */

			return (head);

		}
		head = head->next;
		compare++;
	}
	return (NULL);
}
