#include "lists.h"

/**
 * dlistint_len - counts numbers of elements from a list
 *
 * @h: pointer to the start of a linked list
 *
 * Return: return number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
