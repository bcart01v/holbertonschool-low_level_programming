#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the head of the list, which may be modified
 * if the list was previously empty.
 * @str: A pointer to the string to be duplicated and stored in the new node.
 * The string is duplicated to ensure the node owns its data.
 * Return: A pointer to the newly added node at the end of the list.
 * If the function fails to create a new node (e.g., due to memory
 * allocation failure), NULL is returned.
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
