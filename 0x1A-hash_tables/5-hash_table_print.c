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
			if (p == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			p = 1;
			node = node->next;

			p++;
		}
	}
	printf("}\n");
}
