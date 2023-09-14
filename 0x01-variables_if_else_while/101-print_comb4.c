#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b  <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
