#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



void char_print(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

void int_print(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

void float_print(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

void str_print(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;


}
