#include "main.h"

/**
 * _isdigit - unction that checks for a digit (0 through 9).
 *
 * @c: parameter
 *
 * Return: 1 if is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
