#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 *
 * @argc: number of argument
 * @argv: pointer arguments
 *
 * Return: Always returns 0
 *
 */

int main(int argc, char *argv[])
{
	unsigned int count = 0;
	int i = 0;
	int cent;
	int change[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (cent > 1)
		{
			if (cent < change[i])
				i++;

			else
			{
				count += cent / change[i];
				cent %= change[i];
			}

			if (i == sizeof(change) / sizeof(change[0]))
				break;
		}

		if (cent == 1)
			count++;
	}
	printf("%u\n", count);
	return (0);
}
