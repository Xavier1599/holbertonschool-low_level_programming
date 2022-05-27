#include "hash_tables.h"

/**
 * hash_table_set - add or update the element on the has table
 * @ht: pointer to the has table
 * @key: key to add
 * @value: the value assosiated with the key
 *
 * Return: Upon failure - 0 else 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
