#include "main.h"

int _sqrt_recursion(int n);
int _findsqrt(int num, int sqrt);

/**
 * _find - to find the squaere root
 *
 * @num: parameter
 * @sqrt: parameter
 *
 * Return: if is a natural sqrt + if is not -1
 */

int _find(int num, int sqrt)
{

	if ((sqrt * sqrt) == num)
		return (sqrt);

	if (sqrt == num / 2)
		return (-1);

	return (_find(num, sqrt + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: imputed number
 *
 * Return: posivive if natural number if not -1
 */

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n <= 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_find(n, sqrt));
}
