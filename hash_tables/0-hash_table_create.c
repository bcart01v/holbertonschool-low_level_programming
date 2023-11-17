#include "hash_tables.h"

/**
 * has_table_create - Creates a hash table.
 * @size: the size they want the hash table.
 * Return: Pointer to new table, or Null.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;


	return (table);
}
