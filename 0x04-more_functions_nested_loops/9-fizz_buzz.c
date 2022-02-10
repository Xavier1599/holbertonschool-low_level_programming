#include <stdio.h>

/**
 * main - function to print 1 to 100 and prints
 *        but for multiples of 3 print fizz and for
 *        5 buzz and for both fizz buzz
 *
 * Return: an int
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}

		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}

		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d ", i);
		}

		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
