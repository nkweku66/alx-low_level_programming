#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Author - Nana Obeng
 */

void print_rev(char *s)
{
	char *lv = s;

	while (*lv != '\0')
	{
		lv++;
	}

	lv--;

	while (lv >= s)
	{
		_putchar(*lv);
		lv--;
	}
	_putchar('\n');
}
