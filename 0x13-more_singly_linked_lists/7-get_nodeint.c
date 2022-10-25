#include "lists.h"

/**
 * get_nodeint_at_index- function that returns pointer
 * to the node of index index
 * @head: pointer to the first node
 * @index: The index of node we are looking for
 * Return: pointer to the node we are looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int counter = 0;

	for (counter; counter < index; counter ++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
