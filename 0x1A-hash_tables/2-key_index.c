#include "hash_tables.h"

/**
 * key_index - get the index which will be stored ina array
 * @key: The key to get the index
 * @size: the size of the array
 *
 * Return: The index of the key
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
