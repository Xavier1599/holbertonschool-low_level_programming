#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the location of the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (ptr = ht->array[index]; ptr != NULL; ptr = ptr->next)
		{
			if (first)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				first = 0;
			}

			else
				printf(", '%s': '%s'", ptr->key, ptr->value);
		}
	}
	printf("}\n");
}
