#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number
 *
 * Author - Nana Obeng
 */

void print_to_98(int n)
{
	int a = 0, b = 0, c;

	while (n <= 98)
	{
		if (n < 0)
		{
			c = n * -1;
			a = c / 10;
			b = c % 10;

			_putchar('-');

			if (a != 0)
			{
				_putchar(a + '0');
				_putchar(b + '0');

				if (a == 9 && b == 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(b + '0');
			}
		}
		else if (n > 9)
		{
			a = n / 10;
			b = n % 10;

			_putchar(a + '0');
			_putchar(b + '0');
		}
		else
		{
			_putchar(n + '0');
		}

		if (a < 9 || b < 8)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
