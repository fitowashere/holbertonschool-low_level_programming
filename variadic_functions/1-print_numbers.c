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

	/**
	 * trying something new with the cast to NULL lets see if it works it can also
	 *be done by comparing it to negative in this case since its
	 *an unsigned int and it cant have negative entries
	 */

	if (separator != NULL && n != (unsigned int *)NULL)
	{

		va_start(num, n);

	}

	for (i = 0; i < n; i++)
	{
		sum = va_arg(sum, int);
		printf("%d", sum);
		if (i < n && separator != NULL)
			printf("%s" separator);
	}
	printf(("\n");
			va_end(sum);

			}
