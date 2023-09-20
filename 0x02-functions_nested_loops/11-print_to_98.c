#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number
 *
 * Author - Nana Obeng
 */

void print_to_98(int n)
{
	int inc = (n <= 98) ? 1 : -1;

	if (n <= 98)
	{
		inc = 1;
	}
	else
	{
		inc = -1;
	}

	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n >= 100)
		{
			_putchar((n / 100) + '0');
		}

		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n += inc;

		if (n < 98 && increment == -1)
		{
			break;
		}
	}
	_putchar('\n');
}
