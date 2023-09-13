#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * description: a simple calculator
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always returns 0
 *
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;
	char *operator;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ptr = get_op_func(operator);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}
