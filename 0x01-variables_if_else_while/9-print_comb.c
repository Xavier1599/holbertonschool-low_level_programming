#include <stdio.h>

/**
 * main - prints all possible combinations of
 *        single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int single;

	for (single = 0 ; single <= 9 ; single++)
	{
		putchar((single % 10) + '0');

		if (single == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);

}
