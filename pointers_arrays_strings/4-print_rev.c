#include "main.h"

/**
 *print_rev- gets users input
 *@s: stores users input
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar(10);
}
