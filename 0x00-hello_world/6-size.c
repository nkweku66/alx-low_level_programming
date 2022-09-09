#include <stdio.h>
/**
 * main - prints sizes of the various data types
 * Return: 0 upon completion of the run of code
 */
int main()
{
	char c;
	int i;
	double d;
	float f;

	//sizes evaluate the size of a variable
	printf("Size of a char: %zu bytes(s)\n", sizeof(c));
	printf("Size of a int: %zu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %zu bytes(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %zu bytes(s)\n", (long long)sizeof(d));
	printf("Size of a float: %zu bytes(s)\n", sizeof(f));
