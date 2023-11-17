#include "hash_tables.h"

/**
 * key_index - Returns the key index.
 * @key: Pointer of key 
 * @size: Size of the array.
 * Return: Returns the hash size
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/* Key is the Key */
/* Size is the size of the array in the hash table	*/
	if (key!= NULL)
	{
	long unsigned int hash = hash_djb2(key);	
	return (hash % size);
	}
	return (0);
}
