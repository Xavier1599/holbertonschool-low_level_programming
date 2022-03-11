#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: parameter
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int idx, sum = 0;

	va_start(num, n);

	for (idx = 0; idx < n; idx++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);

}
