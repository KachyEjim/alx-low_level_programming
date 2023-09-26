#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: element to be added
 *
 * Return: returns address of new node, or NULL if failure
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *prev;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	temp = *head;
	prev = NULL;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			prev->next = new;
			return (new);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}

	if (i == idx)
	{
		prev->next = new;
		return (new);

	}
	free(new);
	return (NULL);

}
