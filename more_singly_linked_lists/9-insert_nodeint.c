#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node from the given position
 * @head: a double pointer to the head of the listint_t list
 * @idx: the index where the new node is going to be added
 * @n: the data with which we inject into the new node.
 * Return: The address of our newly created node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_entry = malloc(sizeof(listint_t));
unsigned int counter = 0;
listint_t *current = *head;

if (new_entry == NULL)
{
	return (NULL);
}
	if (head == NULL)
	{
		return (NULL);
	}
	/* Assign data to the new node since we have data */
	new_entry->n = n;
	/* If the index is a 0, we insert at the beginning */
	if (idx == 0)
	{
		new_entry->next = *head;
		*head = new_entry;
		return (new_entry);
	}
	/* Move through the list to find the node before our insertion position*/
	/* If we do equal, we do not get the result we wanted, so minus 1 */
	for (counter = 0; current != NULL && counter < idx - 1; counter++)
	{
		current = current->next;
	}
	/* if current is still blank, then we have no where for it to go. */
	if (current == NULL)
	{
		/* Since we know we had data, we free the memory*/
		free(new_entry);
		return (NULL);
	}
	/* If we are here, we're inserting into the list */
	new_entry->next = current->next;
	current->next = new_entry;
	/*Finally, we return the address of the new node! */
	return (new_entry);
}
