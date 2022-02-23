#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: parameter that has the pieces
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int idx, j;

	for (idx = 0 ; idx < 8 ; idx++)
	{
		for (j = 0 ; j < 8; j++)
		{
			_putchar(a[idx][j]);
		}
		_putchar('\n');
	}
}
