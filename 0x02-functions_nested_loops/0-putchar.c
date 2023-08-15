#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _puutchar
 *
 * Return: Always returns 0
 */

int main(void)
{
	int i = 0;
	char message[] = "_putchar";

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
