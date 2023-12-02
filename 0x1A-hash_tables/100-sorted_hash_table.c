#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *			Otherwise - a pointer to the new sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 *
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: return 0 0n failure, otherwise 1.
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *tmp;
	char *v;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v = strdup(value);
	if (v == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size), tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value), tmp->value = v;
			return (1);
		} tmp = tmp->snext;
	} n = malloc(sizeof(shash_node_t));
	if (n == NULL)
		return (mrfree(v));
	n->key = strdup(key);
	if (n->key == NULL)
		return (mrfree2(n, v));
	n->value = v, n->next = ht->array[index], ht->array[index] = n;
	if (ht->shead == NULL)
		n->sprev = NULL, n->snext = NULL, ht->shead = n, ht->stail = n;
	else if (strcmp(ht->shead->key, key) > 0)
		n->sprev = NULL, n->snext = ht->shead, ht->shead->sprev = n, ht->shead = n;
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		n->sprev = tmp, n->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = n;
		else
			tmp->snext->sprev = n;
		tmp->snext = n;
	} return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *					a key in a sorted hash table.
 *
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *			Otherwise - the value associated with key in ht.
 *
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 *
 * @ht: A pointer to the sorted hash table.
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: A pointer to the sorted hash table to print.
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: A pointer to the sorted hash table.
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}

/**
 * mrfree - used to free
 *
 * s1: first argument
 *
 * Return: Returns 0
*/

int mrfree(char *s)
{
	free(s);
	return (0);
}

/**
 * mrfree2 - used to free
 *
 * s1: first argument
 * s2 second argument
 *
 * Return: Returns 0
*/

int mrfree2(shash_node_t *s1, char *s2)
{
	free(s1);
	free(s2);
	return (0);
}
