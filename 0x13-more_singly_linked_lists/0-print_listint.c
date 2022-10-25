#include "lists.h"

/**
 * print_listint - function to print out all elements in a linked list
 * @h: the head pointer to the first node of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t amt_nodes = 0;
	const listint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		amt_nodes++;
		tmp = tmp->next;
	}

	return (amt_nodes);
}
