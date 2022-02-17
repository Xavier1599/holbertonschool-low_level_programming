#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n ; i++)

		dest[dest_len++] = src[i];

	return (dest);

}
