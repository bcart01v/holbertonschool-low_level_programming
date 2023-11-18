#include "lists.h"

/**
 * insert_dnodeint_at_index Inserts a new node
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added, starting at 0.
 * @n: The integer for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;
	new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	else if (current != NULL)
	{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;

		return (new_node);
	}

	free(new_node);
	return (NULL);
}
