#include "lists.h"

/***
 * 
 * 
 * 
*/

list_t *add_node(list_t **head, const char *str)
{
	char *tempstr = strdup(str);
	list_t *new_entry = malloc(sizeof(list_t));
	
	if (tempstr == NULL)
	{
		free(tempstr);
		return (NULL);
	}

	if (new_entry == NULL) {
		free(tempstr);
		return (NULL);
	}

	new_entry->str = tempstr;
	new_entry->len = strlen(tempstr);
	new_entry->next = *head;
	*head = new_entry;

	return new_entry;
}
