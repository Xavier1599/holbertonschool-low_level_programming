#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to pe printed
 * @n: parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list name;
	char *str;
	unsigned int idx;

	va_start(name, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(name, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if  (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(name);
}
