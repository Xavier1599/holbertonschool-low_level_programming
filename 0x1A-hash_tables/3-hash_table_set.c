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
	unsigned long int index;
	hash_node_t *new_node, *ptr;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0) /*Compare values*/
			break;
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL) /*Handle errors*/
			return (0);
		new_node->key = strdup(key); /*Copy key*/
		if (new_node->key == NULL)
			return (0);
		new_node->value = strdup(value); /*Copy value*/
		if (new_node->value == NULL)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_value = strdup(value); /*Copy value*/
		if (new_value == NULL)
			return (0);
		free(ptr->value);
		ptr->value = new_value;
	}
	return (1);
}
