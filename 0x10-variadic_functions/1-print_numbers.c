#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: a separator
 * @n: number of arguments
 *
 * Author - Nana Obeng
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list args;

		va_start(args, n);

		int i, num;

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);

			if (i != (n - 1))
			{
				printf("%d", num);
				if (separator != NULL)
				{
					printf("%c ", *separator);
				}
			}
			else
			{
				printf("%d", num);
			}
		}
		printf("\n");
		va_end(args)
	}
}
