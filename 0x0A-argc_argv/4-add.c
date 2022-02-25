#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
	int num;
	unsigned int idx, sum = 0;
	char *e;


	if (argc > 1)
	{

		for (num = 1; num < argc; num++)
		{
		e = argv[num];

		for (idx = 0; idx < strlen(e); idx++)
		{
			if (e[idx] < 48 || e[idx] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
				sum += atoi(argv[num]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
