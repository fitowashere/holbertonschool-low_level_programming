#include "main.h"

/**
 *_pow_recursion- gets inputs
 *@x: stores first input
 *@y: stores second input
 *Return: results
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y -1));
}
