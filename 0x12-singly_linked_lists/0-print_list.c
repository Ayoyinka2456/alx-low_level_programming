#include "lists.h"

/**
 * print_list - Prints all elements of a list_t type
 * @h: The pointer argument of type list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h){
	size_t counter = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (h)
	{
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	counter ++;
	}
	return (counter);


}
 
