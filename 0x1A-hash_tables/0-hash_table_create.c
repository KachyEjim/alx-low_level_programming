#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: NULL if an error occurs, otherwise returns
 *			a pointer to the new hash table.
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;


	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	if (size == 0)
	{
		table->array = NULL;
		return (table);
	}

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
