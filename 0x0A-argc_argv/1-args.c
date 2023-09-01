#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: pointer to cli arguments
 *
 * Return: Always returns 0
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
