#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a charcater in square
 * @size: size of square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	if (n < 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
