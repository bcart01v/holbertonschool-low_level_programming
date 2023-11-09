#include "lists.h"

/**
 * pop_listint - Deletes the head node, and returns the data.
 * @head: Double pointer to the list.
 * Return - Update list. 
*/

int pop_listint(listint_t **head)
{
	int number;
	listint_t *keepme;

	if (*head == NULL) 
	{
		return(0);
	}

	keepme = *head;
	number = (*head)->n;
	*head = (*head)->next;
	free(keepme);

	return (number);
}
