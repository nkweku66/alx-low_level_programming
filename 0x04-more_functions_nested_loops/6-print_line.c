#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line
 * @n: lenght of line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
