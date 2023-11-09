#include "lists.h"

/**
 * free_listint - Frees the memory allocated from what's passed
 * @head: The list we're freeing.
*/

void free_listint(listint_t *head)
{
listint_t *releaseme;

while (head != NULL)
	{
		releaseme = head->next;
		free(head);
		head = releaseme;
	}
}
