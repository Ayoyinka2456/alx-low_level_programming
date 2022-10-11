#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - To Initialize the struct dog
 * @d: The variable name
 * @name: Name of the new dog object
 * @age: Age of new dog object
 * @owner: Owner of new dog object
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
