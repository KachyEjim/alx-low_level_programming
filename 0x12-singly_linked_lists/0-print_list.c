#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t n = 0;

	if (h && h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		temp = h;
		while (temp)
		{
			printf("[%d] %s\n", temp->len, temp->str);
			n++;
			temp = temp->next;
		}
	}
	return (n);
}
