#include <stdio.h>
#include "main.h"

/**
 * main - entry of program
 * _putchar - prints to stdout
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(void)
{
	char txt[] = "_putchar";
	int len = sizeof(txt) / sizeof(txt[0]);
	int i;

	for (i = 0; i <= len; i++)
	{
		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}
