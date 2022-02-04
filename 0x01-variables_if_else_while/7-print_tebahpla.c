#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char lower;

	for (lower = 'z' ; lower >= 'a' ; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
