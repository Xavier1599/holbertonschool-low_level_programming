#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: parameter
 * @n: the number of elements of an arrays
 */

void reverse_array(int *a, int n)
{
	int i, store;


	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		store = a[n - 1 -i];
		a[n - 1 - i] = a[i];
		a[i] = store;
	}

}
