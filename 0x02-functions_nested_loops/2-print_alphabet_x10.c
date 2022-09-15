#include "main"
/**
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i < 10)
	{
		ch = 'a';

		while ( ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
