#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that calculates the sum
 * of all the data in a listint_t list
 * @head: first node in the list
 * Return: sum of all data (n) of a listint_t list
 * or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
