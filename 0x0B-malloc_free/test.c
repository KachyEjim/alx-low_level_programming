
/**
 * create_array -  */








char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;
	
	if (size <= 0)
		return (0);
	
	array = (char *)malloc(sizeof(char) * size);

	if (array == 0)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
