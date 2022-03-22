#include "main.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head
 *
 * Return: node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
