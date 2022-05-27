#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value associated with the key
 * @ht: pointewr to the hash table
 * @key: the key to get the value of
 *
 * Return: if key not match = Null otherwise the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
