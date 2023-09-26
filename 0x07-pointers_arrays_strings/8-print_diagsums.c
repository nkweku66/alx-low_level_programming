#include "main.h"

/**
 * print_diagsums - sums the diagonal of a matrix
 * @a: first array
 * @size: second array
 *
 * Author - Nana Obeng
 */

void print_diagsums(int *a, int size)
{
	int sum = 0, sum1 = 0, i;

	for (i = 0; i < size; ++i)
	{
		sum += a[i * size + i];

		sum1 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum, sum1);
}
