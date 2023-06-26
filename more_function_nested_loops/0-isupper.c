#include "main.h"

/**
 * isupper- gets users input
 * @c: stores users input in c
 * Return: result
 */

int _isupper(int c)
{

	if((c > 64) && (c < 91))
		return(1);
	else 
		return(0);
}
