#include "main.h"
#include <stdlib.h>

/**
 * create_array -array of chars,and initializes it with a specific char
 *
 * @size: parameter
 * @c: parameter
 *
 * Return: return null if 0 if else return arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	for (idx = 0; idx < size; idx++)

	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[idx] = c;
	}
	return (arr);
}
