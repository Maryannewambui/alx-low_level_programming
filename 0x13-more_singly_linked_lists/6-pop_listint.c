#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer in the linked list
 * Return: 0 if linked list is empty
 * or the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
