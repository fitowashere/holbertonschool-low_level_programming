#include "main.h"

/**
 *_puts- gets users input
 *@str: stores users input
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');

}
