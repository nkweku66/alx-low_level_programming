#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints character in diagonal
 * @n: number of times to print
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	/*_putchar('\n');*/
}
