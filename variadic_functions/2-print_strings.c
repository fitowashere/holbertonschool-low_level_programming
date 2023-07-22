#include "variadic_function.h"

/**
 *print_string- gets input
 *@separator: stores char entry
 *@n: stores unsigned int entry
 */

void print_string(const char *separator, const unsigned int n, ...)
{
	char a;
	unsigned int i;
	va_list word;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(word, char);

		if (a == NULL)
		{
			a = "(nil)";
		}
		printf("%s", a);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(word);
	}
