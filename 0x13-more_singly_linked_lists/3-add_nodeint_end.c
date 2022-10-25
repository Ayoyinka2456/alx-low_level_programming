#include "lists.h"

/**
 * add_nodeint_end - Function that adds node to end of list and
 * returns teh last node on the list
 * @head: Pointer to the head pointer
 * @n: The data to fill into the struct
 *
 * Return: Pointer to last node in list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *tmp = *head;

if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = NULL;

if (tmp == NULL)
{
	*head = new_node;
	return (new_node);
}
else
{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
tmp->next = new_node;
}
return (new_node);
}
