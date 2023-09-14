#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(void)
{
	char a = 'a';
	char b = 'z';

	for (; a >= b; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
