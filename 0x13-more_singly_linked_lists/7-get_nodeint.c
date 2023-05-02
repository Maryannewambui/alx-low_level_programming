#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the node at a certain index in a linked list
 * @head: node in the linked list
 * @index: index of the node
 * Return: NULL if the node does not exist
 * or the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
