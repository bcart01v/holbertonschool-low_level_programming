#include "lists.h"

/**
 * 
 * 
*/

void free_listint2(listint_t **head)
{
	listint_t *releaseme;
/* It's a pointer to a pointer, we have to dereference */
/* original to free properly */
	while (*head != NULL)
	{
		releaseme = *head;
		*head = (*head)->next;
		free(releaseme);
	}
}
