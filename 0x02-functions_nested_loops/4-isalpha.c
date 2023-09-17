#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: argument
 *
 * Return: 1 on success and 0 otherwise
 * Author - Nana Obeng
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
