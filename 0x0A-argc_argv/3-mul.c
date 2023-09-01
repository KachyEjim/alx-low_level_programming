#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication, followed by a new line
 *
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always returns 0
 *
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	result = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", result);
	return (0);
}
