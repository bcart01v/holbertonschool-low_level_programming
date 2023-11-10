#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A double pointer to the head of the list, which will be modified
 * to point to the newly added node if the addition is successful.
 * @str: A pointer to the string to be duplicated and stored in the new node.
 * Return: A pointer to the newly added node, which is now the head of
 * the list.
 * If the function fails to create a new node (e.g., due to memory
 * allocation failure), NULL is returned.
 */


list_t *add_node(list_t **head, const char *str)
{
	char *tempstr = strdup(str);
	list_t *new_entry = malloc(sizeof(list_t));

	if (new_entry == NULL)
	{
		free(tempstr);
		return (NULL);
	}

	if (tempstr == NULL)
	{
		return (NULL);
	}

	new_entry->str = tempstr;
	new_entry->len = strlen(tempstr);
	new_entry->next = *head;
	*head = new_entry;

	return (new_entry);
}
