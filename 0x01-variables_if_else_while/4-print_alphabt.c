#include <stdio.h>

/**
 * main - Entry point
 * Description: dispalys alphabets exp q&e
 *
 * i: stores characters
 *
 * Return: Always returns 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 113 || i != 101)
			putchar(i);

		i++;
	}

	putchar(10);

	return (0);
}
