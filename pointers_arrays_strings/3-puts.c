#include "main.h"

/**
 *_puts- gets users input
 *@str: stores users input
 *Return: results
 */

void _puts(char *str);
{
	int x;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');

}
