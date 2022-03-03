#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 *
 * @n: maximum number of bytes
 * @s1: first string
 * @s2: second string
 *
 * Return: cat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int idx, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx]; idx++)
		len++;

	cat = malloc(sizeof(char) * (len + 1));

	if (cat == NULL)
		return (NULL);

	len = 0;

	for (idx = 0; s1[idx]; idx++)
		cat[len++] = s1[idx];

	for (idx = 0; s2[idx]; idx++)
		cat[len++] = s2[idx];

	cat[len] = '\0';

	return (cat);
}
