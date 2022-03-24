#include "main.h"
#include <stddef.h>

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	_putchar((n & 1) + '0');
}
