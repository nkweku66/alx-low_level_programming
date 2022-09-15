#include "main.h"
/**
 * main - contains the functions to convert the  alphabets to lowercase
 * Return 0 :prints out the final results and returns nothing
 */

void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
