#include "list.h"

/**
 * sum_dlistint - sum of all elements in the list
 * @head: the head of the list
 *
 * Return: the sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
