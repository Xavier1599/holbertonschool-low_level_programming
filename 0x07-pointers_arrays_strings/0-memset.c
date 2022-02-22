#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: memory pointed to s
 * @b: constant byte
 * @n: number of byte pointed to s
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0 ; idx < n ; idx++)
		*(s + idx) = b;

	return (s);
}
