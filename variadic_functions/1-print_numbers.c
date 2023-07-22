#include "variadic_functions.h"

/**
 *print_numbers- gets input
 *@separator: stores char
 *@n: stores unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int count;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		count = va_arg(num, int);
		printf("%d", count);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);

}
