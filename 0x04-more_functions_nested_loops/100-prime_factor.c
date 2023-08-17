#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	prime_factor();
	return (0);
}

/**
 * prime_factor - Prints highest prime factor
 *
 * Return: Always 0
 */

void prime_factor(void)
{
	long int number = 612852475143;
	int divisor = 2;
	int largest;

	while (number > 1)
	{
		if (number % divisor == 0)
		{
			largest = divisor;
			while (number % divisor == 0)
			{
				number /= divisor;
			}
		}
		divisor++;
	}

	printf("%d\n", largest);

}
