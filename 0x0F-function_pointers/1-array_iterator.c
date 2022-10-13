#include "function_pointers.h"

/**
 * array_iterator - Function to loop throgh an array
 * and carry out some functions on each item
 * @array: Th array to loop through
 * @size : The length of the array
 * @action: The pointer to the function to be carried out
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size ; i++)
			action(array[i]);
	}
}
