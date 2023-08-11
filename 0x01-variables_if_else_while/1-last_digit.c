#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and prints based on the last digit
 * n: Stores the generated random number
 * x: Stores the last digit of n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}
