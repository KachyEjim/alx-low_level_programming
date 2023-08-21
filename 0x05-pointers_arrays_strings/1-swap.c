#include "main.h"

/**
 * swap_int - swaps two intergers
 *
 * @a: first int to be swaped
 * @b: second int to be swaped
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
