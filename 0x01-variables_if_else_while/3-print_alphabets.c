#include <stdio.h>

/**
 * main - Entry point
 * Description: Displays lower and upper case letters
 *
 * i: stores characters
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;

	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar(10)
}
