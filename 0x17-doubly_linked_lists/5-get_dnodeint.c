#include "lists.h"

/**
 * get_dnodeint_at_index - returns a number from a linkedl list
 *
 * @head: pointer to beggining of a list
 * @index: index of the node to be returned
 *
 * Return: The node at (index) else NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i <= index && temp; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
