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

/**
 * insert_nodeint_at_index- function to adds node any idx index position
 * @head: the pointer to pointer(head) to the first node of the list
 * @idx: Index we want to fix new node
 * @n: the data to fill into new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
unsigned int len = (unsigned int)listint_len(*head);
listint_t *tmp = *head;

listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
if (tmp != NULL && len > idx)
{
while (i < (idx - 1))
{
tmp = tmp->next;
i++;
}
new_node->next = tmp->next;
tmp->next = new_node;
new_node->n = n;
}
else
{
return (NULL);
}
return (new_node);
}
