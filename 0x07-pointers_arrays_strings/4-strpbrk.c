#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: parameter
 * @accept: parameter
 *
 * Return: s + idx if matches if not NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int idx = 0;
	int j;

	for (idx = 0 ; s[idx] != '\0' ; idx++)

		for (j = 0 ; accept[j] != '\0' ; j++)

		if  (s[idx] == accept[j])
		{
			return (s + idx);
		}

	return ('\0');
}
