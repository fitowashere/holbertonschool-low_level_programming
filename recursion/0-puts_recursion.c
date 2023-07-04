#include "main.h"

/**
 *_puts_recursion- gets users input
 *@s: Stores users input.
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(s);
	}
	else if (*s == '\0')
	{
		_putchar(10);
	}

	s++;
	_puts_recursion(s);
}
