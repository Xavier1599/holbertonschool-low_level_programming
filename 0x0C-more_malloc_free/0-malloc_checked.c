#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: parameter to be checked
 *
 * Return: check
 */

void *malloc_checked(unsigned int b)
{
	int *check = malloc(b);

	if (check == NULL)
		exit(98);

	return (check);

}
