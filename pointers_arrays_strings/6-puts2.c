#include "main.h"

/**
 *puts2- gets users input
 *@str: stores users input
 *Return: results
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] % 2 == 0)
		{
			_putchar(str[x]);
			x++;
		}
		else
			x++;
	}
	_putchar('\n');

}
