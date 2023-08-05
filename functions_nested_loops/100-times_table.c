#include "main.h"

/**
 * print_times_table - gets input
 * @n: stores input
 * Return: results
 */

void print_times_table(int n)
{
	int num, by, result;

	if (n >= 0 && n < 15)
	{
		for (num = 0; num <= n ; num++)
		{
			for (by = 0; by <= n; by++)
			{
				result = by * num;
				if (by == 0)
				{
					_putchar(result + 48);
				}
				else if (result < 10 && by != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + 48);
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar((result / 100) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
				if (by < n)
					_putchar(',');
			}
			_putchar(10);
		}
	}
}
