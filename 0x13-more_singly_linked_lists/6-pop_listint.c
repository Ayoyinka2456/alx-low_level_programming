#include "lists.h"

/**
 * pop_listint- function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: Pointer to first node
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int decoy;

	if (*head == NULL)
	{
	return (0);
	}

	decoy = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (decoy);
}
