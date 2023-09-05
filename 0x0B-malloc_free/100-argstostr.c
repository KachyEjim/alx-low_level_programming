#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: returns a pointer to a new string, or NULL if it fails
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, k = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (0);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	len++;

	str = (char *)malloc(sizeof(char) * len);

	if (str == NULL)
		return (0);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
