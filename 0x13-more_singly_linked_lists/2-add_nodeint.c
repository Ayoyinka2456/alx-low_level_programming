#include "lists.h"

/**
 * add_nodeint - Function that adds node to
 * beginning of list and returns the first node on the list
 * @head: Pointer to the head pointer
 * @n: The data to fill into the struct
 *
 * Return: Pointer to first node in list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	/**
	*if (new_node == NULL)
	*{
	*	return (1);
	*}
	*/
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
