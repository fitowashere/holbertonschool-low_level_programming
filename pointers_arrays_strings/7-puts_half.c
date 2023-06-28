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
	y = x-- / 2;
	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');

}
