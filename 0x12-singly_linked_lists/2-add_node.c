#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the head of node
 *
 * @head: first node
 * @str: string to be copied
 *
 * Return: the address of the new element of null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;


		new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);


}
