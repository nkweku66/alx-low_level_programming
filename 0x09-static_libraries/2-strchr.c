#include "main.h"

/**
 * *_strchr - strchr
 * @s: pointer
 * @c: pointer
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
