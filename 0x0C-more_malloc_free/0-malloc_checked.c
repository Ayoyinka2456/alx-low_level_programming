#include "main.h"

/**
 * malloc_checked - Function to replicate malloc functionality
 * @b: The size of space to be alloted
 * Return: 98 if no space was alloted
 */

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
	exit(98);

return (a);
}
