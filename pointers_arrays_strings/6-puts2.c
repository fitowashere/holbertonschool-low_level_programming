#include "main.h"

/**
 *puts2- gets users input
 *@str: stores users input
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
			x++;
		}
		else
			x++;
	}
	_putchar('\n');

}
