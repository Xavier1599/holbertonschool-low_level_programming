#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: parameter that points to 0 and 1
 *
 * Return: NUll or the converted number if true
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, k = 1;
	int len = 0, idx = 0;


	if (b == NULL)
		return (0);

	for (len = 0; b[len]; ++len)
		;

	for (idx = len - 1; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '1')
		{
			val += k;
		}
		k *= 2;
	}
	return (val);
}
