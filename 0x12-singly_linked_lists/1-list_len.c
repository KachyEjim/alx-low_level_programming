#include "lists.h"

/**
 * list_len - returns the number of items in list_t
 *
 * @h: pointer to the head of list_t
 *
 * Return: n (number of items)
 *
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	list_t *t = h;

	while (t)
	{
		t = t->next;
		n++;
	}
	return (n);
}
