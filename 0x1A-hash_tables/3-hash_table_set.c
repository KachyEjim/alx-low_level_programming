#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 *
 * Return: 0 if an error occurs, otherwise return 1
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = (value != NULL) ? strdup(value) : strdup("");

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
