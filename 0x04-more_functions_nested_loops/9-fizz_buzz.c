#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always returns 0 (SUCCESS)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - print numbers from 1 to 100
 *
 * i: variable to count
 *
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");

			else
				printf("Buzz ");
		}

		else
			printf("%d ", i);
	}

}
