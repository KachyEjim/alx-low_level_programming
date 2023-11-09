#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 *
 * @head: pointer to beggining of a list
 * @n: element of a node that will be added
 *
 * Return: the address of the new element
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		(*head)->prev = NULL;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
