
/**
 * hash_djb2 - implementation of the djb2 algorithm
 *
 * @str: string passed as argument
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int value = 5381, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		value = (value * 33) + str[i];
	}
	return (value);
}
