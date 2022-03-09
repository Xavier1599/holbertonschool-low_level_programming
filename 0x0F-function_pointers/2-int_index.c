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
	int cnt;

	if (array != NULL || cmp != NULL)
	{
		idx = 1;

		for (idx = 1; idx <= size; idx++)
		{
			cnt = cmp(array[idx]);

			if (cnt != 0)
			{
				return (idx);
			}
		}
	}
	return (-1);
}
