#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node in the list
 * @head: head of list
 * @index: the node to locate
 *
 * Return: if it fails return Null otherwise return the located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
