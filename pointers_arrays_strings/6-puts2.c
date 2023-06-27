#include "main.h"

/**
 *puts2- gets users input
 *@str: stores users input
 *Return: results
 */

void puts2(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		if(str[x] % 2 == 0)
		{
		_putchar(str[x]);
		_putchar('\n');
		x++;
		}
		else
			x++;
	}

}
