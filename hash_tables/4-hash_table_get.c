#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with passed key.
 * @ht: Pointer to the table.
 * @key: The key we use to get the value
 * Return: Either the value, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}

	return (NULL);
}
