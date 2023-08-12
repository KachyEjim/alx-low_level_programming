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
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
