#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: number of times the line should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0 ; l <= n ; l++)
		_putchar('_');
	}
	_putchar('\n');
}
