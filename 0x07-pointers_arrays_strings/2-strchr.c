#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: parameter that contains a string
 * @c: where the first occurenc eis happening
 *
 * Return: if the first occurince is in c return s esle NULL
 */

char *_strchr(char *s, char c)
{
	int idx = 0;

	for (idx = 0; s[idx] >= '\0'; idx++)

		if (s[idx] == c)
		{
			return (s + idx);
		}
	return ('\0');
}
