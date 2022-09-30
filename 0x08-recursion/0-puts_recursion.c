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
	if (sizeof(*s) == sizeof(char))
	{
		_putchar("%s \n", s);
	}
return;
}
