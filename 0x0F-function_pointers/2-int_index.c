#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: parameter
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
		{
			return (idx);
		}
	}
	return (-1);
}
