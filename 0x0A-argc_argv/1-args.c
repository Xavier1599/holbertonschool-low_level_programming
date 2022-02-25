#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: counts the argumesnts
 * @argv: holds the arrsay of characters
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
