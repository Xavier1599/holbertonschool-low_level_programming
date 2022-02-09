#include "main.h"

/**
 * print_last_digit - to print a last digit of the parameter
 *
 * @r: parameter that stores the number
 *
 * Return: 'last'
 */

int print_last_digit(int r)
{
	int last = r % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');


	return (last);

}
