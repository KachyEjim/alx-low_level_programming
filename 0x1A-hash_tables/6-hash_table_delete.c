#include "hash_tables.h"

/**
 * hash_table_delete - Delectes a hash_table
 *
 * @ht: hast table where we are going to work
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			t = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = t;
		}

	}
	free(ht->array);
	free(ht);
}
