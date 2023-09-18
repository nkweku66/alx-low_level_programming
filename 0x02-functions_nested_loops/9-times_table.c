#include "main.h"

/**
 * times_table - prints the times table
 *
 * Author - Nana Obeng
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a * b) + '0');

			if ( a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
