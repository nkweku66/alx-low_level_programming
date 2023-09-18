#include "main.h"

/**
 * times_table - prints the times table
 *
 * Author - Nana Obeng
 */

void times_table(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			_putchar(a * b);

			if ( a != 57)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
