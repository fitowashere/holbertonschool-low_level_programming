#include "main.h"

/**
 *_print_rev_recursion- gets users input
 *@s: stores input in variable
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
