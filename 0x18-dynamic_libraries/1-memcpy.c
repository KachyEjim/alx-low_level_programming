#include "main.h"

/**
 * _memcpy - copy n number of value from scr to dest
 *
 * @dest: pointer to the mem location to be updated and retured
 * @src: pointer to the value used in updating dest
 * @n: of value to be copied from src to dest
 *
 * Return: returns dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
