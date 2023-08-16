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
	int sum = 0;
	int first = 1;
	int second = 2;
	int next;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

			next = first + second;
			first = second;
			second = next;
	}

	printf("%d\n", sum);

	return (0);
}
