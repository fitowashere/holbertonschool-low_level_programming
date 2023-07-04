#include "main.h"

/**
 *_strlen_recursion- gets users input
 *@s: strores input in variable
 *Return: results
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
