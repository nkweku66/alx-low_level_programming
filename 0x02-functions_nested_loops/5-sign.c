#include "main.h"

/**
 * print_sign - checks and print the sign of a number
 * @n: argument
 *
 * Return: 0, 1 or -1 upon success
 * Author - Nana Obeng
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
