#include "main.h"

/**
 * _islower - checks if is in lowercase return 1
 *
 * @c: variable
 *
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
