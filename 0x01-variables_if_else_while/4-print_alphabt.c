#include <stdio.h>

/**
 * main - print the alphabet without the letter
 *        'q' and 'e'
 *
 * Return: 0
 */

int main(void)
{
	char lower;

	for (lower = 'a' ; lower <= 'z' ; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
	}

	putchar('\n');

	return (0);

}
