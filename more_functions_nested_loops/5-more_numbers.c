#include "main.h"

/**
 * more_numbers- gets users input
 * Return: results
 */

void more_numbers(void)
		{

		int w, i;

		for (w = 0; w < 10; w++)
		{

		for (i = 0; i <= 14; i++)
		{
		if (i >= 10)
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		}

		_putchar('\n');

		}
		}
