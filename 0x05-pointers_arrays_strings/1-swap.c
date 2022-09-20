#include "main.h"

/**
 *swap_int- swaps the two integers
 * @a: points to the first value
 * @b: points to the second value
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
