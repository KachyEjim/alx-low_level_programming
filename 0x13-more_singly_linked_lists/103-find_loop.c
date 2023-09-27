#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	t = head;
	h = head;
	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
		{
			t = head;
			break;
		}
	}
	if (!t || !h || !h->next)
		return (NULL);
	while (t != h)
	{
		t = t->next;
		h = h->next;
	}
	return (h);
}
