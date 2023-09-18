#include "main.h"

/**
 * times_table - prints the times table
 *
 * Author - Nana Obeng
 */

void times_table(void)
{
	int a = 0, b;

	while(a <= 9)
	{
		while(b <= 9)
		{
			b *= a;
			_putchar(b + '0');

			if ( b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
