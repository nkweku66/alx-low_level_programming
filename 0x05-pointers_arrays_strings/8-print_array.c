#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array
 * @a: pointer to array
 * @n: number of elements in array
 * Author - Nana Obeng
 */

void print_array(int *a, int n)
{
	for (int i; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
