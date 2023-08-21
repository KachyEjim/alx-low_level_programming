#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer to str
 *
 * Return: return number if int are found
 * else 0 is returned
 *
 */

int _atoi(char *s)
{
	unsigned int number;
	int i, sign, digit, temp;

	number = 0;
	sign = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = i;
			while (1)
			{
				digit = s[temp] - '0';
				number = number * 10 + digit;
				temp++;

				if (s[temp] < '0' || s[temp] > '9')
				{
					if (sign % 2 == 0)
						return (number);

					number = -1 * number;
					return (number);
				}

			}
		}
	}
	return (0);
}
