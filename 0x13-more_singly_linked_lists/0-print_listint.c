#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_listint - prints items in a linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: returns the number of items printed
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
