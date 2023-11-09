#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 *
 * @h: pointer to head of the list
 * @idx: the index to at which to insert
 * @n: number to be save at new node
 *
 * Return: the address of the new node, or NULL if it failed
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i;

	if (!h)
	{
		return (NULL);
	}


	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (*h);
	}

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (!temp)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;
	new->prev = temp;

	return (new);
}
