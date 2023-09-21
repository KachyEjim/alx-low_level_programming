#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string whose the length should be returned.
 *
 * Return: The length of s.
 *
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list
 * @str: pointer to a string
 *
 * Return: head of the list or NULL if not
 * succesful
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;

	t = malloc(sizeof(list_t));
	if (!t)
		return (NULL);

	t->str = strdup(str);
	t->len = _strlen(str);
	t->next = *head;
	*head = t;

	return (t);
}



