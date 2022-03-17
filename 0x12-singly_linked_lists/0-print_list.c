#include "lists.h"

/**
 * print_list - prints all the elements of a lsts_t list
 *
 * @h: parameter that holds the head of a list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node++;

		h = h->next;
	}
	return (node);

}
