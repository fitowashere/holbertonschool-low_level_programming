#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_last_digit- gets the users input
 * @n: stores the input in a variable to use inside the function
 * Return: the result of the function to the original variable
 *
 */

int print_last_digit(int n)
{
	int y = n % 10;

	_putchar(_abs(y) + '0');

	return (_abs(y));

}
