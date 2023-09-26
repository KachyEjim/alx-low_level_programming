#include "lists.h"

/**
 * add_nodeint - dds a new node at the beginning of a listint_t list
 *
 * @head: pointer to a pointer of the list
 * @n: new element added
 *
 * Return: returns address of new element
 * or null if it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
