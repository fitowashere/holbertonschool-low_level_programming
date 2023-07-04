#include "main.h"
#include "_putchar.c"

/**
 *_puts_recursion- gets users input
 *@s: Stores users input.
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
