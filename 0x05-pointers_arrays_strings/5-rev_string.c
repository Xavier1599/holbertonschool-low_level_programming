#include "main.h"

/**
 * rev_string -  function that reverses a string
 *
 * @s: parameter that holds the string
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int store;

	for (length = 0 ; s[length] != '\0'; ++length)
		;

	for (i = 0; i < length - 1; i++)

		store = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = store;


}
