#include "main.h"

/**
 * _isalpha - check for upper and lowercase letters
 *
 * @c: variable that contains the alphabet
 *
 * Return: 1 if lower and uppercase and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
