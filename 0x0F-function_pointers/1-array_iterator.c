#include "function_pointers.h"

/**
 * array_iterator - Function to loop throgh an array
 * and carry out some functions on each item
 * @array: Th array to loop through
 * @size : The length of the array
 * @action: The pointer to the function to be carried out
 * Return: 0 Always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		for (size_t i = 0; i < size ; i++)
			action(array[i]);
	}
}
