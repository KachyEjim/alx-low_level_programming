#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * listint_len - prints items in a linked iilist
 *
 * @h: pointer to the head of the list
 *
 * Return: returns the number of items in the list
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	temp = h;
	while (temp)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
