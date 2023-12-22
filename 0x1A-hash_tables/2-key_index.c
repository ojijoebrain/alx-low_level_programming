#include "hash_tables.h"

/**
 * key_index - To get the key/value index at which
 *      pair should be stored in array of a hash table.
 * @key: To get the index of array
 * @size: Array size of the hash table.
 *
 * Return: Index key.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

