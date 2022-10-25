#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Pointer to first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
