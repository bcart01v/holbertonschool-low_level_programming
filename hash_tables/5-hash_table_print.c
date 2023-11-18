#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: Pointer to hash table we're printing
 * Return: Only if the hash table is null.
*/

void hash_table_print(const hash_table_t *ht)
{
	int first = 1;
	hash_node_t *node;
	unsigned long int i = 0;

	if (ht == NULL)
	return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!first)
			{
				printf(", ");
			}

			printf("'%s': '%s'", node->key, node->value);
			first = 0;

			node = node->next;
		}
	}

	printf("}\n");
}
