#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: parameter that holds a string
 */

void puts_half(char *str)
{
	int i, length, n;

	for (length = 0 ; str[length] != '\0'; length++)
		;

	if ((length % 2) == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
