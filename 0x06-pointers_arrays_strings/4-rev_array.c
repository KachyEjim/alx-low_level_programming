#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: array of ints to be reversed
 * @n: number of items in the array
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
