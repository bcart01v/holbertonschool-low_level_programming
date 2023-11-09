#include "lists.h"

/**
 * sum_listint - We're summing up a list!
 * @head: The list passed to us to be summed
 * Return: The sum of the list.
*/

int sum_listint(listint_t *head)
{
	int thisvalue = 0;
	int total = 0;

	while (head != NULL)
	{
		thisvalue = head->n;
		total = (total + thisvalue);
		head = head->next;
	}

return (total);
}
