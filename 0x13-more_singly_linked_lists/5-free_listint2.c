#include "lists.h"

/**
 * free_listint2- Function that frees a listint_t list
 * @head: Pointer to first node
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	}
	free(*head);
	*head = NULL;
}
