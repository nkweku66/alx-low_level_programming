#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints more number
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, b;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <=14; j++)
		{
			b = j % 10;

			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
