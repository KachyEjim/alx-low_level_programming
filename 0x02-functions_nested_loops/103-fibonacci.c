#include <stdio.h>

/**
 * main - Entry point
 * description: prints the sum of the even-valued
 *
 * second: stores munber
 * first: stores number
 * sum: store result of fibinacci
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int sum = 0;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
