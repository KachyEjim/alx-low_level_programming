#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[100];
	int i = 0, sum = 0;
	int x, y;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		x = (sum - 2772) / 2;
		y = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			x++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + y))
			{
				password[i] -= y;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + y))
			{
				password[i] -= y;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
