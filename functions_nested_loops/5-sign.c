#include "main.h"

/**
 *print_sign- gets the users input
 *@c: variable used to store the users input
 *Return: returns the output
 */


int print_sign(int c)
{

	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (2);
}

