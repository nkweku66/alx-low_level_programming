#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the character
 * 
 * Return: 1 when correct and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
