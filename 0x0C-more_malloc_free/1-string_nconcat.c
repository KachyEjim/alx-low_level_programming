#include <stdlib.h>
#include "main.h"








char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int unsigned i = 0, j = 0;
	unsigned int len = 0;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	for (i = 0; s2[i] &&  i < n; i++)
	{
		len++;
	}
	len++;

	ptr = allo_space(len);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];


	for (j = 0; s2[j] && j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';
	return (ptr);

}

void *allo_space(unsigned int size)
{
	void *temp;

	temp = malloc(sizeof(char) * size);

	if (temp == NULL)
		return (0);

	return (temp);
}
