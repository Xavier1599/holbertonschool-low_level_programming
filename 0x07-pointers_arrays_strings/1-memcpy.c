#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter to copy
 * @src: parameter to copy
 * @n: bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx = 0;

	for (idx = 0 ; idx < n ; idx++)

		dest[idx] = src[idx];

	return (dest);
}
