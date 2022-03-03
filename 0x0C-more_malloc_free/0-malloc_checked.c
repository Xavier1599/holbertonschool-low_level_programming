#include "main.h"
#include <stdlib.h>


/**
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	int *check = malloc(b);

	if (check == NULL)
		exit (98);

	return (check);

}
