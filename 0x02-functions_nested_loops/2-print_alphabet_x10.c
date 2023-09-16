#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 * Author - Nana Obeng
 */

void print_alphabet_x10(void)
{
	int a = 97, b = 1;

	while (b <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		b++;
	}
	_putchar('\n');
}
