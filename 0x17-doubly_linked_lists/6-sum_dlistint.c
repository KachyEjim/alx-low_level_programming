#include "lists.h"

/**
 * sum_dlistint - returns a number from a linkedl list
 *
 * @head: pointer to head of the list
 *
 * Return: sum of all nodes
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
