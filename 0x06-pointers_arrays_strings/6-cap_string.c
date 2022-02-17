#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: parameter
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;


	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((s[i - 1] >= 0 && s[i - 1] <= 47) || (s[i - 1] >= 58 && s[i - 1] <= 63))
			{
				if (!(s[i - 1] == 45))
				{
					s[i] = s[i] - 32;
				}
			}
			else if (s[i - 1] == 123 || s[i] == 125)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
