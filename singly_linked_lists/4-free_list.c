#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the start of the list.
 *
 * This function releases all the memory used by a linked list,
 */

void free_list(list_t *head)
{
	list_t *freedom;

	while (head != NULL)
	{
		freedom = head->next;
		free(head->str);
		free(head);
		head = freedom;
	}
}
