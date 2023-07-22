#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct typ - types of data and their function
 * @ltr: the type of data
 * @type: pointer to function for type
 */
typedef struct typ
{
	char *ltr;
	void (*type)();
} typ;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char _putchar(char c);
#endif
