#include <stdio.h>
/**
 * main - will print the size of the of the various data types.
 * sizeof() - checks the size
 * Return: 0 upon finishing
 */
int main(void)
{
	char c;
	int i;
	float d;

	printf("size of a char is: %lu. \n byte(s)",sizeof(c));
	printf("size of a char is: %lu. \n byte(s)",sizeof(i));
	printf("size of a char is: %lu. \n byte(s)",(unsigned long)sizeof(i));
	printf("size of a char is: %lu. \n byte(s)",(unsigned long long)sizeof(i));
	printf("size of a float is: %lu. \n byte(s)",(unsigned long)sizeof(d));
	return (0);
}
