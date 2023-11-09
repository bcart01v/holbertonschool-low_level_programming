#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_t - A node in a singly linked list.
 * @n: right now, the count of the nodes.
 * @next: A pointer to the next node in the list, or NULL if it is the last
 * node.
 * Description: This structure represents a single node in a singly linked
 * list.
 * It stores a string and its length, as well as a reference to the
 * subsequent node in the list.
 */

typedef struct listint_t
{
	/* Restuctured for readability */
	unsigned int n;
	struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);




#endif
