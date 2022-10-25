#include "lists.h"

/**
 * listint_len - function to prints amount of elements
 * in a linked list
 * @h: the head pointer to the first node of the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t amt_nodes = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		amt_nodes++;
		tmp = tmp->next;
	}

	return (amt_nodes);
}
