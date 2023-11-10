#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node that should be deleted, indexing starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index) {
	listint_t *current = *head;
	listint_t *temp_node = NULL;
	unsigned int counter = 0;
	/* If it's nothing, we're returning*/
	if (*head == NULL) 
	{
		return (-1);
	}
	/* If it's at the front, change to the next and free the old*/
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	/*Find the node prior to the one we want to delete.*/
	for (; current != NULL && counter < index - 1; counter++)
	{
		current = current->next;
	}
	/*check if the nodeto delete is actually in our list. */
	if (current == NULL || current->next == NULL)
	{
		/*if not, we're done here.*/
		return (-1);
	}
	/* Goodbye node! */
	temp_node = current->next;
	current->next = temp_node->next;
	free(temp_node);

	return (1);
}
