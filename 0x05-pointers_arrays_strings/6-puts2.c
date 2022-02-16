#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: parameter
 */

void puts2(char *str)

{
	int length = 0;
	int i;

	for (length = 0; str[length] != '\0' ; length++)
		;

	for (i = 0; i < length ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
