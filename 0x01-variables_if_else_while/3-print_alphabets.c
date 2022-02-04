#include <stdio.h>

/**
 * main - function to print the alphabet, lower
 *        and uppercase with putchar
 *
 * Return: 0
 */

int main(void)
{

	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
