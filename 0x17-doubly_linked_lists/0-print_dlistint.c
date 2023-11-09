#include "lists.h"

/**
 * print_dlistint - prints items inside a dlistint node
 *
 * @h: pointer to the head of dlistint_t nodes
 *
 * Return: size of the dlistint_t node
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
}
