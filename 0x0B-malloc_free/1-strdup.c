#include "main.h"

/**
 * _strdup - create a duplicate of a string
 * @str: string
 *
 * Return: success
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *ret =(char *)malloc(_strlen(str) + 1);

		if (ret != NULL)
		{
			_strcpy(ret, str);
		}
		return (ret);
		free(ret);
	}
	else
	{
		return (NULL);
	}
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: res
 */

char _strcpy(char *dest, char *src)
{
	char *strg = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (*strg);
}

/**
 * _strlen - gets the len of a string
 * @s: the pointer to string
 *
 * Return: result
 */

int _strlen(char *s)
{
	return (*s != '\0' ? 1 + _strlen(s + 1) : 0);
}
