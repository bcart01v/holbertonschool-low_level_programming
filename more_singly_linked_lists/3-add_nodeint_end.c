#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to end of list.
 * @head: Double pointer to head of list.
 * @n: The int to be added to the new node.
 * Return: The updated list.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new_entry = malloc(sizeof(listint_t));
	
	if (new_entry == NULL)
	{
		/* If it's empty, we didnt allocate memory right? */
		return (NULL);
	}
	
	new_entry->n = n;
	new_entry->next = NULL;

	if (*head == NULL)
	{
		/* if head is Null, then we start the list */
		*head = new_entry;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			/*if the next node is not null, we move on */
			current = current->next;
		}
		/* we are at the end of the list, add the entry */
		current->next = new_entry;
	}
return (new_entry);
}
