#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(void)
{
	int a = 97;
	int b = 122;

	for (; a <= b; a++)
	{
		putchar(a);
	}

	a = 65;
	b = 90;

	for (; a <= b; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
