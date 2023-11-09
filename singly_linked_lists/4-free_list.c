#include "lists.h"

/**
 * 
 * 
 * 
*/

void free_list(list_t *head)
{
	list_t *freedom;
	while (head !=NULL)
	{
		freedom = head->next;
		free (head->str);
		free(head);
		head = freedom;
	}
}