#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
int _atoi_recursive(char *s, int sign, int result, int found_digit);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
#endif
