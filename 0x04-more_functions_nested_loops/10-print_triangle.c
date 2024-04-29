#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: noting
 */

void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n);
	}

	for (i = 1; i <= size; i++)
	{
		/* Print the leading space */
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		/* print '#' character */
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
