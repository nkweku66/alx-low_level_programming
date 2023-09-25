#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: argument
 *
 * Return: success
 * Author - Nana Obeng
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = i * j;

				if (j > 0)
				{
					printf(", ");
				}

				if (result < 10)
				{
					printf("  %d", result);
				}
				else if (result < 100)
				{
					printf(" %d", result);
				}
				else
				{
					printf("%d", result);
				}
			}
			printf("\n");
		}
	}
}
