#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: counts the arguments
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc ; idx++)

		printf("%s\n", argv[idx]);

	return (0);

}
