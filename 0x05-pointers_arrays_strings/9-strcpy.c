#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];

	while (*(src++) != '\0')
	{
		i++;
	}

		return (dest);
}
