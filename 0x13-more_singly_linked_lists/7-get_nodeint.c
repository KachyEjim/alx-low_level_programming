#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: head of the list
 * @index: index to be retured
 *
 * Return: return the node at the index, otherwise
 * return NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int t;

	temp = head;

	t = 0;

	while (temp)
	{
		if (t == index)
			return (temp);
		t++;
		temp = temp->next;
	}
	return (NULL);
}
