#include "lists.h"

/**
 * free_dlistint - frees a linked list
 *
 * @head: pointer to head of a dlistint_t node
 *
 * Return: the address of the new element
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
