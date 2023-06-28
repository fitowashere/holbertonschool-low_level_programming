#include "main.h"

/**
 *puts_half- gets users input
 *@str: stores users input
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		y = x-- / 2;
		y += 1;
	}
	else
	{
		y = x / 2;
	}

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');

}
