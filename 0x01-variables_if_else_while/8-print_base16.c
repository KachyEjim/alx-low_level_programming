#include <stdio.h>

/**
 * main - Entry point of the program
 * Description : dispalys all hexadecimal nums
 *
 * c: store each character
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
