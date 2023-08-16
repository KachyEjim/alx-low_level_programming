#include <stdio.h>

/**
 * main - Entry point
 * descrption: calculates sum of all multiples of 5&3 below 1024
 *
 * sum: stores the sum of multiples of 5&3
 * i: use to iltrate
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return 0;
}
