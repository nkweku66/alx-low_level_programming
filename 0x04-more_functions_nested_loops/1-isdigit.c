#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the digit
 *
 * Return: 1 when correct and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
