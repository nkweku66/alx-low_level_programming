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

	for (; b >= a; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
