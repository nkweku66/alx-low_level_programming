#include "main.h"

/**
 * swap_int - swaps integers
 * @a: argument 1
 * @b: argument 2
 *
 * Return: nothing
 * Author - Nana Obeng
 */

void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
