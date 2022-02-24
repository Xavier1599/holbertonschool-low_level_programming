#include "main.h"

int is_prime_number(int n);
int prime(int num, int div);

/**
 * prime - to check if number is prime or not
 *
 * @num: parameter to check
 * @div: parameter to divide
 *
 * Return 0 if not and 1 if is prime
 */

int prime(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (prime(num, div + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: input number
 *
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime(n, div));
}
