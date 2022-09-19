#include "main.h"

/**
 * swap_int - To swap the values of two integers
 * @a: The first integer
 * @b: the second integer
 * Result: 0 always
 */

void swap_int(int *a, int *b)
{
	int update_var;

	update_var = *a;
	*a = *b;
	*b = update_var;
}
