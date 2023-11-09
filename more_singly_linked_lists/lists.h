#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_t - A node in a singly linked list.
 * @str: A pointer to a dynamically allocated string associated with the node.
 * @len: The length of 'str'. It represents the number of characters in 'str',
 * excluding the null-terminating character.
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
	unsigned int len;
	char *str; /* a string if we need it*/
	struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);



#endif