#include "main.h"
 
/**
 * _isdigi- gets users input
 * @c: stores users input
 * Return: returns result
 */

int _isdigit(int c)
{

	if (c > 47 && c < 58)
		return(1);
	else
		return(0);
}

