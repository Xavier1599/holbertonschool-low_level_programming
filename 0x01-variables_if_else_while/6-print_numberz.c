#include <stdio.h>

/**
 * main - funtion to print the numbers of base 10
 *        with the putchar funtion
 *
 * Return: 0
 */

int main(void)
{
	int base;

		for (base = 0 ; base < 10 ; base++)
			putchar((base % 10) + '0');

	putchar('\n');

	return (0);
}
