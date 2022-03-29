#include "main.h"
#include <stdlib.h>
/**
 * main - program that copies the content of a file to another file.
 *
 * @ac: parameter
 * @av: parameter
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int o_from, o_to, r, w, close1, close2;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_from = open(av[1], O_RDONLY);
	r = read(o_from, buffer, 1024);
	if (o_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	o_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	w = write(o_to, buffer, r);
	if (o_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
			exit(99);
	}
	close1 = close(o_from);
	close2 = close(o_to);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close1);
		exit(100);
	}
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close2);
		exit(100);
	}
	return (0);
}