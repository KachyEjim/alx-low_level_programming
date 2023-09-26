#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: pointer to the head of the list
 *
 * Return: returns n
 *
 */

int pop_listint(listint_t **head)
{
	listint *temp;

	if (!head || !*head)
		return (0);

	temp = *head;
	n = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (n);
}
