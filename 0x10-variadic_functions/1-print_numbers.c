#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the string to be printed
 * @n: parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int idx;

	va_start(num, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(num, int));

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
