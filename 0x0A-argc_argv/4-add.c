#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: count the array spaces
 * @argv: string of aray
 *
 * Return: 1 if err0r and 0 if good
 *
 */

int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc > 1)
	{

		for (num = 1; num < argc; num++)
		{

			if (atoi(argv[num]) < 0 || atoi(argv[num]) > 9)
			{
				printf("Error\n");
				return (1);
			}

			else

				sum += atoi(argv[num]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
