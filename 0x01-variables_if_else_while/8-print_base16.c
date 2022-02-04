#include <stdio.h>

/**
 * main - print  all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	int base;

	for (base = 0 ; base < 10 ; base++)
		putchar((base % 10) + '0');

	for (letter = 'a' ; letter <= 'f' ; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
