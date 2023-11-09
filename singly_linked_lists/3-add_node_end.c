#include "lists.h"

/***
 * 
 * 
 * 
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *tempstr = strdup(str);
	list_t *new_entry = malloc(sizeof(list_t));
	
	if (tempstr == NULL)
	{
		return (NULL);
	}

	if (new_entry == NULL) {
		free(tempstr);
		return (NULL);
	}

	new_entry->str = tempstr;
	new_entry->len = strlen(tempstr);
	new_entry->next = NULL;

	if (*head == NULL) 
	{
		*head = new_entry;
	}
	else
	{
		list_t *current = *head;
		while (current->next !=NULL) 
		{
			current = current->next;
		}
		current->next = new_entry;
	}
	return new_entry;
}
