#include "dog.h"

/**
 * free_dog - function that frees dog's memory space
 * @d: the dog object to be freed
 * Return: 0 always
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
