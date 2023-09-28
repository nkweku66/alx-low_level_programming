#include "main.h"

/**
 * is_palindrome - Checks to see if a string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 on success
 * Author - Nana Obeng
 */

int is_palindrome(char *s)
{
	return (checks(s, 0));
}

/**
 * _strlen - gets the length of a string
 * @s: pointer
 * @i: count
 *
 * Return: results
 */

int _strlen(char *s, int i)
{
	if (*s == '\0')
	{
		return (i);
	}
	return (_strlen(s + 1, i + 1));
}

/**
 * checks - check for palindrome
 * @str: array
 * @i: index
 *
 * Return: 1 on success
 */

int checks(char str[], int i)
{
	int n = _strlen(str, 0) - (i + 1);

	if (str[i] == str[n])
	{
		if (i + 1 >= n)
		{
			return (1);
		}
		return (checks(str, i + 1));
	}
	else
	{
		return (0);
	}
}
