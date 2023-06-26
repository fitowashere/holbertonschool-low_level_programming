#include "main.h"

/**
 * times_table- gets users input
 * Return: output
 */

void times_table(void)
{

	int number, by, result;

	for (by = 0; by <= 9; by++)
	{
		for (number = 0; number <= 9; number++)
		{
			result = number * by;

			if (result < 10 && number != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result != 0)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (number < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
