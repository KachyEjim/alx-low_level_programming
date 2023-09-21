#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a linked list.
 *
 * @head: The pointer to the first linked list node
 *
 * Return: nothing.
 *
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
