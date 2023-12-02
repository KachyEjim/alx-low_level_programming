#include "hash_tables.h"

/**
 * hash_table_print - prints elements from hash table
 *
 * @ht: hast table where we are going to work
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int p = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (p == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			p = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
