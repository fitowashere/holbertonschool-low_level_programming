#include "variadic_functions.h"

/**
 *print_numbers- gets input
 *@separator: stores char
 *@n: stores unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, count;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num, int);
		printf("%d", num);
		if (i < n && separator != NULL)
			printf("%s" separator);
	}
	printf("\n");
	va_end(num);

}
