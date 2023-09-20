#include "main.h"

/**
 * times_table - prints the times table
 *
 * Author - Nana Obeng
 */

void times_table(void)
{
	int a = 0, b, c, d, e;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = a * b;

			if (c <= 9)
			{
				if (b > 0)
				{
					_putchar(' ');
				}
			}

			if (c > 9)
			{
				d = (c / 10);
				e = (c % 10);
				_putchar(d + '0');
				_putchar(e + '0');
			}
			else
			{
				_putchar(c + '0');
			}

			if (b < 9)
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
