#include "main.h"

/**
 * print_last_digit - this prints the last digit
 * @n: argument
 *
 * Return: last digit
 * Author - Nana Obeng
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	_putchar (lastd);
	return (lastd);
}
