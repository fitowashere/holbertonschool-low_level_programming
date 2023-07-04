#include "main.h"

/**
 *findsqrthelper- gets users input
 *@n: stores input in variable
 *@y: stores second input
 *Return: results
 */

int findsqrthelper(int n, int y)
{
	if ((y * y) > n)
	{
		return (-1);
	}
	else if ((y * y) == n)
	{
		return (y);
	}
	return (findsqrthelper(n, (y + 1)));
}

/**
 *_sqrt_recursion- gets users input
 *@n: stores input in variable
 *Return: results
 */

int _sqrt_recursion(int n)
{
	int helper = 0;

	return (findsqrthelper(n, (helper + 1)));
}
