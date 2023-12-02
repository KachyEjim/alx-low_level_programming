#include "hash_tables.h"

/**
 * hash_table_print - prints elements from hash table
 *
 * @ht: hast table where we are going to work
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **t, *node;
	unsigned long i = 0, p;

	if (ht == NULL)
		return;
	t = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = t[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (p < (ht->size - 1))
				printf(", ");
			p++;
		}
	}
	printf("}\n");
}
