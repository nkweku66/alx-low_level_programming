#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character
 *
 * Return: s
 * Author - Nana Obeng
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
