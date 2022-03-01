#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  that concatenates two strings.
 *
 * @s1: "Best"
 * @s2: "School"
 *
 * Return: NULL if pased a null else return cat for the concatanated string
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int idx, len = 0, concat = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (idx = 0; s1[idx] || s2[idx]; idx++)
		len++;

	cat = malloc(sizeof(char) * len);

	if (cat == NULL)
	{
		return (NULL);
	}

	for (idx = 0; s1[idx]; idx++)
		cat[concat++] = s1[idx];

	for (idx = 0; s2[idx]; idx++)
		cat[concat++] = s2[idx];

	return (cat);
}
