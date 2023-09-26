#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * of a listint_t
 *
 * @head: pointer to the head of the listint_t
 * @n: element to be added to the list
 *
 * Return: new (Address of the new node)
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
