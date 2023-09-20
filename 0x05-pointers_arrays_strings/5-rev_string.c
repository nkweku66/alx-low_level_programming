#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string argument
 * Author - Nana Obeng
 */

void rev_string(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len -i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');
}
