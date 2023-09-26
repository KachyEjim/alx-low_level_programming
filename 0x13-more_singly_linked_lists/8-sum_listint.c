#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * in listint_t
 *
 * @head: head of the list
 *
 * Return: sum (sum of all the data (n) in the list)
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;
	
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
