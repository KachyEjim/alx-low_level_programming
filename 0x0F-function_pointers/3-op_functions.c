#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds two ints
  *
  * @a: first int
  * @b: second int
  *
  * Return: a + b
  *
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two ints
  *
  * @a: first int
  * @b: second int
  *
  * Return: a - b
  *
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two ints
  *
  * @a: first int
  * @b: second int
  *
  * Return: a * b
  *
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two ints
  *
  * @a: first int
  * @b: second task
  *
  * Return: a / b
  *
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - finds the remiender of the div of 2 ints
  *
  * @a: firt int
  * @b: second int
  *
  * Return: returns a % b
  *
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
