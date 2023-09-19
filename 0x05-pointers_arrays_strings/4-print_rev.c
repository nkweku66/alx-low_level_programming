#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Author - Nana Obeng
 */

void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	print_rev(s + 1);
	_putchar(*s);
}
