#include "main.h"

/**
 * leet - encodes the string into leet speach
 *
 * @s: parameter
 *
 * Return: s
 */

char *leet(char *s)
{

	int idx1 = 0;
	int idx2 = 0;
	char *array_leet = "aAeEoOtTlL";
	char *array_beet = "4433007711";

	for (idx1 = 0 ; s[idx1] != '\0' ; idx1++)
	{
		for (idx2 = 0 ; array_leet[idx2] != '\0' ; idx2++)
		{
			if (s[idx1] == array_leet[idx2])
			{
				s[idx1] = array_beet[idx2];
			}

		}
	}
	return (s);
}
