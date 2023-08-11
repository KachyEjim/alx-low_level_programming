#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/** 
 * main function : generates ran num and prints based on the value of the last #
 * n : stores generated random number
 * x : store the last digit of n
 * retuen : returns 0 if code executes suc. and 1 otherwise
*/

int main(void)
{
	int n;
	int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (n > 5)
	{
	 printf ("Last digit of %d is %d and is greater  than 5\n",n,x);
	}
	else if (n == 0)
	{
	 printf ("Last digit of %d is %d and is 0\n",n,x);
	}
        else if (n < 6)
        {
         printf ("Last digit of %d is %d and is less than 6 and not 0\n",n,x);
        }
	/* your code goes there */
	return (0);
}
