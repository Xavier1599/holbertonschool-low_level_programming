#include "main.h"
#include <stdlib.h>

/**
 * _strdup -contains a copy of the string given as a parameter.
 *
 * @str: parameter where the string is located
 *
 * Return: if str and dup are = to null return null else return dup
 */

char *_strdup(char *str)
{

	char *dup;
	int idx, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (idx = 0; str[idx]; idx++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (idx = 0; str[idx]; idx++)
		dup[idx] = str[idx];

	return (dup);
}
