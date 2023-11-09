#include "lists.h"

/**
 * free_listint2 - Free's up memory
 * @head: The list were taking to free
*/

void free_listint2(listint_t **head)
{
	listint_t *releaseme;

	if (head == NULL)
	{
		return;
	}
/* It's a pointer to a pointer, we have to dereference */
/* original to free properly */
	while (*head != NULL)
	{
		releaseme = *head;
		*head = (*head)->next;
		free(releaseme);
	}
}
