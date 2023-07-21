#include "variadic_functions.h"

/**
 *sum_them_all- gets input
 *@n: stores input
 *Return: results
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0, i;
	va_list sum;

	if (n != 0)
	{
		va_start(sum, n);

		for (i = 0; i < n; i++)
		{
			count += va_arg(sum, int);
		}
	}
		va_end(sum);
		return (count);
}
