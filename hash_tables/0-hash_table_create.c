#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size they want the hash table.
 * Return: Pointer to new table, or Null.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);

	}
	return (table);
}
