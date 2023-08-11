#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print small letter a to z
 *
 * i: stores the characters
 * Return: returns 0 always
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
