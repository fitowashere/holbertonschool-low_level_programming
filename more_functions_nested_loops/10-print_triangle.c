#include "main.h"

/**
 *print_triangle- gets users input
 *@size: stores users input
 *Return: results
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0 && size != 1)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = (size - a); b > 0; b--)
				_putchar(' ');
			for (c = 0; c < a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
