#include "lists.h"

/**
 *  delete_nodeint_at_index -  deletes the node at index
 *  index of a listint_t linked list
 *
 *  @head: head of the list
 *  @index: index of the node to be delected
 *
 *  Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	temp = *head;
	prev = NULL;
	if (index == i)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
