#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(void)
{
	unsigned char a = 0x00;
	unsigned char b = 0x0f;

	for (; a <= b; a++)
	{
		if (a <= 9)
		{
			putchar('0' + a);
		}
		else
		{
			putchar('a' + (a - 10));
		}
	}
	putchar('\n');
	return (0);
}
