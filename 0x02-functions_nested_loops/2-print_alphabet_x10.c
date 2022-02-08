#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	int alpha;
	int count = 0;


	while (count <= 9)

	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)

			_putchar(alpha);
		count++;
		_putchar('\n');
	}

}
