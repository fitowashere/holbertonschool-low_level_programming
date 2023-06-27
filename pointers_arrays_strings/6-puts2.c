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
		_putchar(str[x]);
		_putchar('\n');
		x++;
	}

}
