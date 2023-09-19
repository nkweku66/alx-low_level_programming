#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string argument
 * Author - Nana Obeng
 */

void rev_string(char *s)
{
	char *lv = s;

	while (*lv != '\0')
	{
		lv++;
	}

	lv--;

	while (lv >= s)
	{
		_putchar(*s);
		lv--;
	}
	_putchar('\n');
}
