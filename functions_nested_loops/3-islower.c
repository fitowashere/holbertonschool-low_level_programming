#include "main.h"

/**
 * _islower- checks if its lower
 * @c: input requested for the script;
 * Return: results
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
