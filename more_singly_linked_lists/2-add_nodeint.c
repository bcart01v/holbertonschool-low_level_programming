#include "lists.h"

/**
 * add_nodeint - Adds node passed to linked list
 * @head: Double pointer to list
 * @n: the new entry passed
 * Return: the new entry.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_entry = malloc(sizeof(listint_t));
	if (new_entry == NULL)
	{
		return (NULL);
	}

	new_entry->n = n;
	new_entry->next = *head;
	*head = new_entry;

	return (new_entry);
}
