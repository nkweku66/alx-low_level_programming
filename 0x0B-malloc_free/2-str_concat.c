#include "main.h"

/**
 * *str_concat - to join string
11;rgb:0000/0000/0000* @s1: destination
 * @s2: source
 *
 * Return: string
 * Author - Nana Obeng
 */

char *str_concat(char *s1, char *s2)
{
	size_t i = 0, j = 0;

	if (s1 != NULL && s2 != NULL)
	{
		char *strg;

		strg = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));

		while (s1[i] != '\0')
		{
			strg[i] = s1[i];
			i++;
		}

		while (s2[j] != '\0')
		{
			strg[i] = s2[j];
			i++;
			j++;
		}
		strg[i] = '\0';
		return (strg);
		free(strg);
	}
	return (NULL);
}

/**
 * _strlen - check length of string
 * @s: string
 *
 * Return: string
 */

int _strlen(char *s)
{
	return ((*s != '\0') ? 1 + _strlen(s + 1) : 0);
}
