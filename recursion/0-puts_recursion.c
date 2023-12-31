#include "main.h"

/**
 * _puts_recursion - gets users input
 * @s: gets input
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_puts_recursion(s);
}
