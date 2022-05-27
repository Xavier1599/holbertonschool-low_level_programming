#include "hash_tables.h"

/**
 * hash_table_delete - hash table to be deleted and freed
 * @ht: the location of the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	hash_table_t *head = ht;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			ptr = ht->array[idx];
			while (ptr != NULL)
			{

				tmp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
