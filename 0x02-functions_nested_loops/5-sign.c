#include "main.h"

/**
 * print_sign - prints a sign depending on the return value
 *
 * @n: parameter for the return value
 *
 * Return: print '+' if return 1, '-' if returns -1 and '0' if return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

		_putchar('\n');
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);

		_putchar('\n');
	}

	else
	{
		_putchar('0');
		return (0);

		_putchar('\n');
	}

}

