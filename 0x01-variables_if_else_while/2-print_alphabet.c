#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 upon success
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
	putchar('\n');
	return (0);
}
