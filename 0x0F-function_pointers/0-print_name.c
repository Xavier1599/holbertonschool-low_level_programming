#include "function_pointers.h"


/**
 * print_name - function to print name
 *
 * @name: parameter that holds the name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
