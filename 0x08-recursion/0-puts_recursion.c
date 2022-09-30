#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: this is the string value
 *
 * The function will check an assigned value if its string will print it
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
