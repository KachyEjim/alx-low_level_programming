#include "main.h"









char *string_toupper(char *t)
{
	int i;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
			t[i] = t[i] - 32;
		
	}
	return (t);
}
