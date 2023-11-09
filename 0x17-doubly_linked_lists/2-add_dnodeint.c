#include "lists.h"

/**
 * add_dnodeint - add node at the beggining of a list
 *
 * @head: pointer to beggining of a list
 * @n: element of a node that will be added
 *
 * Return: the address of the new element
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);

}
