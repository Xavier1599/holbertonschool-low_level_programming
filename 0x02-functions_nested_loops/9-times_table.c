#include "main.h"

/**
 * times_table - to print times 9 table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, u;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar ('0');

		for (j = 1 ; j <= 9 ; j++)
		{
			u = i * j;

			_putchar(',');
			_putchar(' ');

			if (u <= 9)
			{
				_putchar(' ');
				_putchar(u + '0');
			}
			else
			{
				_putchar((u / 10) + '0');
				_putchar((u % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
