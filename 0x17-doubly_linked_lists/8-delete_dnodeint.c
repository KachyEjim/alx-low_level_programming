#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 *
 * @head: pointer to head of the list
 * @index: the index of the node to be delected
 *
 * Return: 1 on succes, or -1 if it failed
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i <= index && temp; i++)
	{
		if (i == index)
		{
			if (temp->prev)
				temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp == *head)
				*head = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
