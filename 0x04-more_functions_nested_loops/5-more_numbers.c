#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints more number
 *
 * Return: nothing
 */

void more_numbers(void)
{
	unsigned i, j, a, b;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			a = j / 10 + '0';
			b = j % 10 + '0';

			if (j > 9)
			{
				_putchar(a);
			}
			_putchar(b);
		}
		_putchar('\n');
	}
}
