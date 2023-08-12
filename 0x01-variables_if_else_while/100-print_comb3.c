#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 *              of two digits, separated by commas and spaces, in
 *              ascending order.
 *
 * i: counts first digit
 * j: counts second digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int  j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

