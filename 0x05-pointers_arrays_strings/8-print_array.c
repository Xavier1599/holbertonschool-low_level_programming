#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: parameters
 * @n: parameters
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; ; ++i)
	{
		if (a[i] == a[n])
			break;
		printf("%d, ", a[i]);
	}
	printf("\n");
}
