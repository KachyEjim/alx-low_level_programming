#include <stdio.h>

/**
 * main - Entry point
 * Description: dispalys number 0to9
 *
 * i: stores numbers
 *
 * Return: Always returns 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
