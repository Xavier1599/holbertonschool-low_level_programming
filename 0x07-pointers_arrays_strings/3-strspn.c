#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: parameter that has the string
 * @accept: second string
 *
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx = 0;
	int j;
	int n = 0;


	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[idx] == accept[j])
			{

				n = n + 1;
			}
		}
		if (s[idx] == ',' || s[idx] == ' ')
			break;
	}
	return (n);
}
