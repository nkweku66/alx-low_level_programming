#include "main.h"

/**
 * puts_half - Prints a half a string
 * @str: the string
 * Author - Nana Obeng
 */

void puts_half(char *str)
{
	int i = 0, n, m;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;

	for (m = n + 1; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
