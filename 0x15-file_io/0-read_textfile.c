#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the filename that is going to opean read and write
 * @letters: the amount of letters that it should read write
 *
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		return (0);
	}
	close(o);

	return (w);

}
