#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - A node in a singly linked list.
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
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
