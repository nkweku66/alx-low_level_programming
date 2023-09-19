#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string
 * Author - Nana Obeng
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
