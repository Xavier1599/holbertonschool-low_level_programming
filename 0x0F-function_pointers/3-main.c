#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks if operaters are present
 *
 * @argc: variable count
 * @argv: variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (oprt == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
