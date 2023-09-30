#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: argument
 *
 * Return: 1 on success and 0 otherwise
 * Author - Nana Obeng
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
