#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number
 *
 * Author - Nana Obeng
 */

void print_to_98(int n)
{
	int a = 0, b = 0;

	while (n <= 98)
	{
		if (n > 9)
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
		_putchar('\n');
		n++;
	}
}
