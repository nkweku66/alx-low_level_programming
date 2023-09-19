#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string
 * Author - Nana Obeng
 */

void puts2(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		n++;
	}
	_putchar('\n');
}
