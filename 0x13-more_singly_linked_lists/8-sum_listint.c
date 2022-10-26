#include "lists.h"

/**
 * sum_listint- function to sumsall node->n elements
 * in a linked list
 * @head: the head pointer to the first node of the list
 * Return: sum of all node->n in the list, 0 if there's no list
 */

int sum_listint(listint_t *head)
{
	int amt = 0;
	const listint_t *tmp = head;

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		while (tmp != NULL)
		{
			amt += tmp->n;
			tmp = tmp->next;
		}
	}
	return (amt);
}
