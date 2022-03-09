#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function given as a parameter on each element of an array.
 *
 * @array: parameter
 * @size: parameter
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0; idx < size; idx++)
	{
		action(*array);
		array++;
	}
}
