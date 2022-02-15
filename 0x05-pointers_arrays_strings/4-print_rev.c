#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: parameter that haves the string
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	for (length = 0; s[length] != '\0'; ++length)
		;

	for (i = length - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
