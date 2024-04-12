#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints more number
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, a, b;

	for (i = 0; i <= 14; i++)
	{
		a = i / 10;
		b = i % 10;

		if (i >= 10)
		{
			_putchar('0' + a);
		}
		_putchar('0' + b);
	}
	_putchar('\n');
}
