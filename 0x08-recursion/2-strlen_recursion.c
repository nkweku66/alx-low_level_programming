#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string
 *
 * Return: 1 on success
 * Author - Nana Obeng
 */

int _strlen_recursion(char *s)
{
	return (*s != '\0' ? 1 + _strlen_recursion(s + 1) : 0);
}
