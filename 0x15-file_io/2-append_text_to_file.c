#include "main.h"

/**
 * append_text_to_file - append text
 *
 * @filename: parameter
 * @text_content: parameter
 *
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_RDWR | O_APPEND, 0664);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
