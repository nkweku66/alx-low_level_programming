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
	double d;

	printf("size of a char is: %lu. \n",sizeof(c));
	printf("size of a char is: %lu. \n",sizeof(i));
	printf("size of a char is: %lu. \n",(unsigned long)sizeof(i));
	printf("size of a char is: %lu. \n",(unsigned long long)sizeof(i));
	printf("size of a float is: %lu. \n",(float)sizeof(d));
	return (0);
}
