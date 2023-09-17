#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 * Author - Nana Obeng
 */

void print_alphabet_x10(void)
{
	int a = 1, b;

	while (a <= 10)
	{
		b = 97;

		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		a++;
	}
	_putchar('\n');
}
