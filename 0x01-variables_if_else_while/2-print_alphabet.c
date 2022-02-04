#include <stdio.h>

/**
 * main - function to use putchar for printing the alphabet
 *        with the putchar command
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

		for (alpha = 'a' ; alpha <= 'z' ; ++alpha)
			putchar(alpha);

	putchar('\n');

	return (0);

}
