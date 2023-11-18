#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a separator
 * @n: number of arguments
 *
 * Author - Nana Obeng
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;

	if (*seperator != NULL)
	{
		va_start(print, n);

		int i, num;

		for (i = 0; i < n; i++)
		{
			num = va_arg(print, int);
			printf("%d", num);

			if (i != (n - 1))
			{
				printf("%c ", *seperator);
			}
			printf("\n");
		}
	}
	va_end(print);
}