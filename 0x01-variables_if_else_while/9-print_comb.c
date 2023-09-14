#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(void)
{
	int a = 48;
	int b = 57;

	for (; a <= b; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
